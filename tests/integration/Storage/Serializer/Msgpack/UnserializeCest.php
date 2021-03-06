<?php

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalcon.io>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

declare(strict_types=1);

namespace Phalcon\Test\Integration\Storage\Serializer\Msgpack;

use Codeception\Example;
use Phalcon\Storage\Serializer\Msgpack;
use stdClass;
use IntegrationTester;

class UnserializeCest
{
    /**
     * Tests Phalcon\Storage\Serializer\Msgpack :: unserialize()
     *
     * @note         dataProvider is not used here, it messes up console output
     *
     * @author       Phalcon Team <team@phalcon.io>
     * @since        2019-03-30
     */
    public function storageSerializerMsgpackUnserialize(IntegrationTester $I)
    {
        $I->wantToTest('Storage\Serializer\Msgpack - unserialize()');

        foreach ($this->getExamples() as $example) {
            $serializer = new Msgpack();
            $serialized = msgpack_pack($example[1]);
            $serializer->unserialize($serialized);

            $expected = $example[1];
            $actual   = $serializer->getData();

            $I->assertEquals($expected, $actual);
        }
    }

    /**
     * Tests Phalcon\Storage\Serializer\Msgpack :: unserialize() - error
     *
     * @author       Phalcon Team <team@phalcon.io>
     * @since        2019-09-28
     */
    public function storageSerializerMsgpackUnserializeError(IntegrationTester $I)
    {
        $I->wantToTest('Storage\Serializer\Msgpack - unserialize() - error');
        $serializer = new Msgpack();

        $serialized = '??hello?messagepack"';
        $serializer->unserialize($serialized);

        $I->assertEmpty($serializer->getData());
    }

    private function getExamples(): array
    {
        return [
            [
                'integer',
                1234,
            ],
            [
                'float',
                1.234,
            ],
            [
                'string',
                'Phalcon Framework',
            ],
            [
                'array',
                ['Phalcon Framework'],
            ],
            [
                'object',
                new stdClass(),
            ],
        ];
    }
}
