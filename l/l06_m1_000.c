section "l06_m1_000"{
    Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(23, 1) == 1){
        Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
        Voice_PlayVoice("FD_01_030_00000", #1, "");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Message_Who(1);
        Message_MsgDisp("Saeki", "White Day is here.\nThis is my return gift.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Saeki＊＊｝!");
        Voice_PlayVoice("FD_01_030_00100", #1, "");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Character_BlinkStart(1, 3, (#1));
        Message_Who(1);
        Message_MsgDisp("Saeki", ".. So? What about him?\nTell me, Father won't get angry at\nyou.");
        Character_Chara_GS2(1, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(1, 130) <= 2){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
        Voice_PlayVoice("L0601000_A00000", 1, "L0601000_A00001");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hello, ｛主人公｝.\nThanks for the chocolate last month.\nThis is a return gift.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Saeki＊＊｝!");
        Voice_PlayVoice("L0601000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I will see you later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation.)");
        }
    else if (Parameter_GetCh1Param(1, 130) >= 3){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Music_PlayBGM(0, "MN_C_01_000_D02", 127, 40);
        Voice_PlayVoice("L0601000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, hey.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝!");
        Voice_PlayVoice("L0601000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Got a sec?");
        Message_Who(0);
        Message_MsgDisp("主人公", "???");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "L0601000_A00400");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.\nThis is a return gift for last\nmonth.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm glad! Thanks!");
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("L0601000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, well...\nHurry up and put it away.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0601000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Alright.... Later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        if (Parameter_GetCh1Param(1, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what this present is?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Assorted Handmade Cookies\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Whoa, they look good!\nThey're like a pro's work, the\nshapes are detailed!\nI also have to practice...)");
            Parameter_AddCh1Param(1, 330, 1);
            Parameter_AddPl1Param(19, 10);
            }
        else if (Parameter_GetCh1Param(1, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what this present is?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Handmade White Chocolate Cookies\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Amazing! They look yummy!\nHe's a pro at making cookies!\nI should also practice...)");
            Parameter_AddPl1Param(19, 10);
            Parameter_AddPl1Param(16, 5);
            }
        }
    Parameter_InCh1Param(1, 555, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
