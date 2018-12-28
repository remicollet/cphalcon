<?php
declare(strict_types=1);

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

namespace Phalcon\Test\Unit\Acl\Adapter\Memory;

use UnitTester;

/**
 * Class SetNoArgumentsDefaultActionCest
 */
class SetNoArgumentsDefaultActionCest
{
    /**
     * Tests Phalcon\Acl\Adapter\Memory :: setNoArgumentsDefaultAction()
     *
     * @param UnitTester $I
     *
     * @author Phalcon Team <team@phalconphp.com>
     * @since  2018-11-13
     */
    public function aclAdapterMemorySetNoArgumentsDefaultAction(UnitTester $I)
    {
        $I->wantToTest('Acl\Adapter\Memory - setNoArgumentsDefaultAction()');
        $I->skipTest('Need implementation');
    }
}
