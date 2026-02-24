section "p53_m5_000"{
    int var0 = 0;
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Somehow, we've gotten more\nvisitors...?)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("", 5, "P5305000_E00000");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nWe've got quite a crowd.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝. Yeah, we do.\nWhy?");
            Voice_PlayVoice("P5305000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I called these cute girls here.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5305000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You want various people to see this,\nright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Right. Ah, it's about time.");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(There's only a little while left\nuntil we unveil our work!\nMy heart is racing!)");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("P5305000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The number of visitors isn't\ndecreasing...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!? You want less?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P5305000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Because... they'll see your work.");
            Character_BlinkStart(5, 0, (#1));
            Voice_PlayVoice("P5305000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "\"Who drew this?\" \"She did!\"\n\"Well, isn't she cute!\"\nIf it ended up like this...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha, you're thinking too much\nabout it.\nAh, it's about time.");
            Character_BlinkStart(5, 3, (#1));
            Voice_PlayVoice("P5305000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ugh～...\nYou don't have any awareness at\nall～...");
            }
        Character_Chara_GS2(5, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(34, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's about time we unveiled our\nartwork.\nWon't a few more visitors come?)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nI wonder why there aren't any\nvisitors coming.");
            Voice_PlayVoice("P5305000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Maybe because there's a maid cafe\nright next door?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5305000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Don't you think I'm commendable, to\ncome all the way here after shaking\noff the clingy maids?");
            Message_Who(0);
            Message_MsgDisp("主人公", "If you're a club member, coming here\nis only the obvious thing to do.");
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("P5305000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Ah.");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's about time we unveiled our\nartwork.\nI have to be ready!)");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("P5305000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There are only a few visitors.\nSince we want people to see it,\nshould we call some people in here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5305000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If we did a hilarious husband and\nwife skit, we'd surely get a lot of\npeople coming in.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's got nothing to do with the Art\nClub, so we can't.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5305000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nThat's not the part where you should\nbe following up with a reply on...\nWell, it's fine... Ah, it's time.");
            }
        Character_Chara_GS2(5, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(35, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else {
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(It looks like we'll be able to show\na lot of people our work.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("", 5, "P5305000_E01300");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nIt's about time for the unveiling.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! I look forward to it.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5305000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "No matter what, they are\nmasterpieces....\nAh, I'm kinda nervous now...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha.\nAh, it's starting,\n｛Chris＊＊｝!");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(There are quite a few people who\ncame to see.\nIt was worth it putting all the\neffort in!)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("P5305000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It worked well.\nThe effect of my advertising went\nperfectly well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou advertised before coming here?");
            Voice_PlayVoice("P5305000_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nDon't we want everyone to see our\nwork?\nSince we made such masterpieces.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, right.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5305000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nI haven't seen anything like the\nthing you painted today, so it's\nburned in my memory.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Voice_PlayVoice("P5305000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, it looks like it's starting.\nWe should go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah.");
            }
        Character_Chara_GS2(5, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(36, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    System_Call_GS2("P54", "M5", 0);
    }
