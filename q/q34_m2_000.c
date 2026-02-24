section "q34_m2_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "The school field trip ends tomorrow.\nIt went by so fast.");
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("Q1202000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It was a fun field trip!)");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "The school field trip ends tomorrow.\nIt went by so fast.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q1202000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah...\nWe were a little short on time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I wish we had one more day.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q1202000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nYou can always try stretching the\nlength of time beyond their control.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* You may be right.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "The school field trip ends tomorrow.\nIt went by so fast.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q1202000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I wanted to visit many more\nplaces...");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q1202000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... If you want, we can stay.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q1202000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's a joke.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Again, ｛Shiba＊＊｝?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had a fun field trip!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    Parameter_AddCh1Param(2, 61, 6);
    Parameter_AddCh1Param(2, 60, 4);
    Parameter_AddCh1Param(2, 62, #6);
    }
