class CfgGather {
    class Resources {
        class apple {
            amount = 5;
            zones[] = { "res_apple_1", "res_apple_2", "res_apple_3", "res_apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "res_peaches_1", "res_peaches_2", "res_peaches_3", "res_peaches_4" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "res_heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "res_cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "res_weed_1" };
            item = "";
            zoneSize = 30;
        };

		class wood {
            amount = 2;
            zones[] = { "res_wood_1" };
            item = "";
            zoneSize = 30;
        };

        class corn {
            amount = 2;
            zones[] = { "res_corn_1" };
            item = "";
            zoneSize = 30;
        };

        class cotton {
            amount = 2;
            zones[] = { "res_cotton_1" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "res_sand_1" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "res_diamond_1" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "res_rock_1" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "res_oil_1", "res_oil_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
    };
};
