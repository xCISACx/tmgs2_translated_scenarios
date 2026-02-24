section "s01_pl_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    int var8;
    int var9;
    int var10;
    int var11;
    int var12;
    int var13;
    int var14 = Parameter_GetPl1Param(12);
    switch (var14){
        case 0:
        Background_Bg_GS2("BG_HO200_WI_0", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_WI_0", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_WI_0", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_WI_0", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_Y_00_001_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ugh...\nIt's the beginning of a new year and\nI welcome it by being sick...");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "It's the start of a new year!\nI somehow feel refreshed.");
        }
    if (Parameter_GetCh1Param(1, 514) == 1){
        if ((Parameter_GetCh1Param(1, 130) >= 2) && (Parameter_GetCh1Param(1, 61) >= 80) && (Parameter_GetCh1Param(1, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(2, 514) == 1){
        if ((Parameter_GetCh1Param(2, 130) >= 2) && (Parameter_GetCh1Param(2, 61) >= 80) && (Parameter_GetCh1Param(2, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(3, 514) == 1){
        if ((Parameter_GetCh1Param(3, 130) >= 2) && (Parameter_GetCh1Param(3, 61) >= 80) && (Parameter_GetCh1Param(3, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(4, 514) == 1){
        if ((Parameter_GetCh1Param(4, 130) >= 2) && (Parameter_GetCh1Param(4, 61) >= 80) && (Parameter_GetCh1Param(4, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(5, 514) == 1){
        if ((Parameter_GetCh1Param(5, 130) >= 2) && (Parameter_GetCh1Param(5, 61) >= 80) && (Parameter_GetCh1Param(5, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(6, 514) == 1){
        if ((Parameter_GetCh1Param(6, 130) >= 2) && (Parameter_GetCh1Param(6, 61) >= 80) && (Parameter_GetCh1Param(6, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(7, 514) == 1){
        if ((Parameter_GetCh1Param(7, 130) >= 2) && (Parameter_GetCh1Param(7, 61) >= 80) && (Parameter_GetCh1Param(7, 512) != 2)){
            var0 = 1;
            }
        }
    if (Parameter_GetCh1Param(8, 514) == 1){
        if ((Parameter_GetCh1Param(8, 130) >= 2) && (Parameter_GetCh1Param(8, 61) >= 80) && (Parameter_GetCh1Param(8, 512) != 2)){
            var0 = 1;
            }
        }
    if (var0 == 1){
        }
    else {
        var0 = Parameter_ExtChar(3, 2, 71, 1);
        if (var0 > 0){
            var0 = 1;
            }
        }
    if (var0 == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "I didn't get any New Year cards from\nanyone...\n*Sigh*...");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, a New Year card came this year!\nI wonder who it's from.");
        if (Parameter_GetCh1Param(1, 514) == 1){
            if ((Parameter_GetCh1Param(1, 130) >= 2) && (Parameter_GetCh1Param(1, 61) >= 80) && (Parameter_GetCh1Param(1, 512) != 2)){
                var1 = 1;
                }
            }
        if (Parameter_GetCh1Param(2, 514) == 1){
            if ((Parameter_GetCh1Param(2, 130) >= 2) && (Parameter_GetCh1Param(2, 61) >= 80) && (Parameter_GetCh1Param(2, 512) != 2)){
                var2 = 1;
                }
            }
        if (Parameter_GetCh1Param(3, 514) == 1){
            if ((Parameter_GetCh1Param(3, 130) >= 2) && (Parameter_GetCh1Param(3, 61) >= 80) && (Parameter_GetCh1Param(3, 512) != 2)){
                var3 = 1;
                }
            }
        if (Parameter_GetCh1Param(4, 514) == 1){
            if ((Parameter_GetCh1Param(4, 130) >= 2) && (Parameter_GetCh1Param(4, 61) >= 80) && (Parameter_GetCh1Param(4, 512) != 2)){
                var4 = 1;
                }
            }
        if (Parameter_GetCh1Param(5, 514) == 1){
            if ((Parameter_GetCh1Param(5, 130) >= 2) && (Parameter_GetCh1Param(5, 61) >= 80) && (Parameter_GetCh1Param(5, 512) != 2)){
                var5 = 1;
                }
            }
        if (Parameter_GetCh1Param(6, 514) == 1){
            if ((Parameter_GetCh1Param(6, 130) >= 2) && (Parameter_GetCh1Param(6, 61) >= 80) && (Parameter_GetCh1Param(6, 512) != 2)){
                var6 = 1;
                }
            }
        if (Parameter_GetCh1Param(7, 514) == 1){
            if ((Parameter_GetCh1Param(7, 130) >= 2) && (Parameter_GetCh1Param(7, 61) >= 80) && (Parameter_GetCh1Param(7, 512) != 2)){
                var7 = 1;
                }
            }
        if (Parameter_GetCh1Param(8, 514) == 1){
            if ((Parameter_GetCh1Param(8, 130) >= 2) && (Parameter_GetCh1Param(8, 61) >= 80) && (Parameter_GetCh1Param(8, 512) != 2)){
                var8 = 1;
                }
            }
        if ((Parameter_GetCh1Param(10, 60) > 70) && (Parameter_GetCh1Param(10, 514) == 1) && (Parameter_GetCh1Param(10, 513) != 1)){
            var9 = 1;
            }
        if ((Parameter_GetCh1Param(11, 60) > 70) && (Parameter_GetCh1Param(11, 514) == 1) && (Parameter_GetCh1Param(11, 513) != 1)){
            var10 = 1;
            }
        if ((Parameter_GetCh1Param(12, 60) > 70) && (Parameter_GetCh1Param(12, 514) == 1) && (Parameter_GetCh1Param(12, 513) != 1)){
            var11 = 1;
            }
        if ((Parameter_GetCh1Param(13, 60) > 70) && (Parameter_GetCh1Param(13, 514) == 1) && (Parameter_GetCh1Param(13, 513) != 1)){
            var12 = 1;
            }
        if (Parameter_GetSysParam(0) == 1){
            if ((var1 == 1) || (var13 == 1)){
                Graphic_Nenga_Print(1, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "It's from ｛Saeki＊＊｝.\nA picture of a beautiful beach...\nIt seems like something\n｛Saeki＊＊｝ would choose.");
                }
            if ((var2 == 1) || (var13 == 2)){
                Graphic_Nenga_Print(2, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...\nThere's not a single word either...\nWell, it's simple.");
                }
            if ((var3 == 1) || (var13 == 3)){
                Graphic_Nenga_Print(3, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Heh, ｛Hikami＊＊｝'s\nskillful handwriting!\nAs expected.");
                }
            if ((var4 == 1) || (var13 == 4)){
                Graphic_Nenga_Print(4, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "From ｛Hariya＊＊｝.\nIt's a fresh monochrome New Year's\ncard...");
                }
            if ((var5 == 1) || (var13 == 5)){
                Graphic_Nenga_Print(5, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "It's from ｛Chris＊＊｝.\nIt's a Japanese and Western-style\nblend.\nI think he designed it himself.");
                }
            if ((var7 == 1) || (var13 == 7)){
                Graphic_Nenga_Print(7, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "From ｛Wakaouji＊＊｝.\nThis New Year's card somehow makes\nme feel relaxed.\nAh, there's a chemistry symbol on\nthe back!");
                }
            if ((var8 == 1) || (var13 == 8)){
                Graphic_Nenga_Print(8, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝.\nUgh, it was stabbed by a nail...");
                }
            if ((var9 == 1) || (var13 == 10)){
                Graphic_Nenga_Print(10, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "... Wow. ｛Toudou＊＊｝...\nSo cool...");
                }
            if ((var10 == 1) || (var13 == 11)){
                Graphic_Nenga_Print(11, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nThank you for reminding me to do my\nhomework, ｛Onoda＊＊｝...");
                }
            if ((var11 == 1) || (var13 == 12)){
                Graphic_Nenga_Print(12, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "From ｛Nishimoto＊＊｝!\nA lovely illustration...\nMaybe she drew it herself?");
                }
            if ((var12 == 1) || (var13 == 13)){
                Graphic_Nenga_Print(13, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.\nWell, ｛Mizushima＊＊｝'s New\nYear's card managed to restore my\npeace of mind.");
                }
            }
        else if (Parameter_GetSysParam(0) == 2){
            if ((var1 == 1) || (var13 == 1)){
                Graphic_Nenga_Print(1, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "It came from ｛Saeki＊＊｝!\nAs I thought, an illustration of the\nsea.");
                }
            if ((var2 == 1) || (var13 == 2)){
                Graphic_Nenga_Print(2, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "There's no message...\nThe simplicity...\nAh, as I thought, it's from\n｛Shiba＊＊｝.");
                }
            if ((var3 == 1) || (var13 == 3)){
                Graphic_Nenga_Print(3, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nHis feelings are intense.");
                }
            if ((var4 == 1) || (var13 == 4)){
                Graphic_Nenga_Print(4, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "It's related to\n｛Hariya＊＊｝'s zodiac!\nIt gives it a nice impression.");
                }
            if ((var5 == 1) || (var13 == 5)){
                Graphic_Nenga_Print(5, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Wow, a wildlife cartoon-style.\n｛Chris＊＊｝'s a fanatic.");
                }
            if ((var6 == 1) || (var13 == 6)){
                Graphic_Nenga_Print(6, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, it's from ｛Amachi＊＊｝.\nAhaha, please continue to treat me\nwell this year!");
                }
            if ((var7 == 1) || (var13 == 7)){
                Graphic_Nenga_Print(7, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "It's from ｛Wakaouji＊＊｝.\nHe says the craziest things...");
                }
            if ((var8 == 1) || (var13 == 8)){
                Graphic_Nenga_Print(8, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝'s New Year's\ncard is quite simple.");
                }
            if ((var9 == 1) || (var13 == 10)){
                Graphic_Nenga_Print(10, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "This...\nAs I thought, it's from\n｛Toudou＊＊｝.\nIt has an adult feeling to it...");
                }
            if ((var10 == 1) || (var13 == 11)){
                Graphic_Nenga_Print(11, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "It came from ｛Onoda＊＊｝.\n\"Please take care of yourself...\"\n*Giggles* How kind.");
                }
            if ((var11 == 1) || (var13 == 12)){
                Graphic_Nenga_Print(12, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "*Giggles* ｛Nishimoto＊＊｝'s\nNew Year's card is the most recent\nreport.");
                }
            if ((var12 == 1) || (var13 == 13)){
                Graphic_Nenga_Print(13, 2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Wow, ｛Mizushima＊＊｝'s New\nYear's card is so pretty!");
                }
            }
        else {
            if ((var1 == 1) || (var13 == 1)){
                Graphic_Nenga_Print(1, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝'s New Year's\ncard...\nIs this a photo?\nIs it possible he took it while he\nwas diving?");
                }
            if ((var2 == 1) || (var13 == 2)){
                Graphic_Nenga_Print(2, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "From ｛Shiba＊＊｝....\nYep, as I thought, this is just like\n｛Shiba＊＊｝.\nA New Year's card from a convenience\nstore.");
                }
            if ((var3 == 1) || (var13 == 3)){
                Graphic_Nenga_Print(3, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "It's from ｛Hikami＊＊｝.\n\"I see through you...\"\nThat's not refreshing!");
                }
            if ((var4 == 1) || (var13 == 4)){
                Graphic_Nenga_Print(4, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "It came from ｛Hariya＊＊｝.\nAh, it's a fine picture of the\nzodiac!\nHow unexpected...");
                }
            if ((var5 == 1) || (var13 == 5)){
                Graphic_Nenga_Print(5, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "Wow, ｛Chris＊＊｝'s New\nYear's card is really colorful!\nThe background seems difficult...");
                }
            if ((var6 == 1) || (var13 == 6)){
                Graphic_Nenga_Print(6, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, from ｛Amachi＊＊｝....\nIt feels a bit lonely,\n｛Amachi＊＊｝...");
                }
            if ((var7 == 1) || (var13 == 7)){
                Graphic_Nenga_Print(7, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "There is a chemical symbol on the\ncard ｛Wakaouji＊＊｝ sent.\nThat won't cook meat...");
                }
            if ((var8 == 1) || (var13 == 8)){
                Graphic_Nenga_Print(8, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "Masaki-senpai's New Year's card has\na picture of a plant with no\nrelation to the sexagenary cycle.\nI wonder why that is?");
                }
            if ((var9 == 1) || (var13 == 10)){
                Graphic_Nenga_Print(10, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Toudou＊＊｝'s obsessed\nwith Japanese-styles!\nWell, that's cool!");
                }
            if ((var10 == 1) || (var13 == 11)){
                Graphic_Nenga_Print(11, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "It's from ｛Onoda＊＊｝.\nThere are a few messages.\n\"Study very hard\".");
                }
            if ((var11 == 1) || (var13 == 12)){
                Graphic_Nenga_Print(12, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "*Giggles* So cute～!\nIs the female model possibly\n｛Nishimoto＊＊｝ by chance?");
                }
            if ((var12 == 1) || (var13 == 13)){
                Graphic_Nenga_Print(13, 3);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, could this cattle possibly be\n｛Mizushima＊＊｝'s handwriting?\nHeh, it's quite good...");
                }
            }
        }
    Graphic_Nenga_Print();
    Message_CloseMsg();
    System_Call_GS2("S01", "PL", 10);
    }
