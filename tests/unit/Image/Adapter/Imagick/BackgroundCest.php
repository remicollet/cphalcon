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

namespace Phalcon\Test\Unit\Image\Adapter\Imagick;

use UnitTester;

/**
 * Class BackgroundCest
 */
class BackgroundCest
{
    /**
     * Tests Phalcon\Image\Adapter\Imagick :: background()
     *
     * @param UnitTester $I
     *
     * @author Phalcon Team <team@phalconphp.com>
     * @since  2018-11-13
     */
    public function imageAdapterImagickBackground(UnitTester $I)
    {
        $I->wantToTest('Image\Adapter\Imagick - background()');
        $I->skipTest('Need implementation');
    }
}
