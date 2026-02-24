section "z44_s1_001"{
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Moving away very quickly, a lot\nhappened this year...\nWill next year be better?...)");
        SoundEffect_StopStream(0, 40);
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's the end of the year.\nSo long, yet so short......\nWill next year be better...?)");
        SoundEffect_StopStream(0, 40);
        }
    else {
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(14, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Z4414000_N02000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "... The time is 00:01.\nBoss battle... Clear! ...\nRushing past... Grown up time...");
        Character_Chara_GS2(14, "NON");
        SoundEffect_PlayStream(2, "SS_T_00_221_M00");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then we better get some sleep.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's the end of the year.\nI'll be a high school senior for\nthree more months.\nWill next year be better...?)");
        SoundEffect_StopStream(2, 40);
        SoundEffect_StopStream(0, 40);
        }
    Environment_StopME(1, 40);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
