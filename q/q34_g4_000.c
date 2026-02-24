section "q34_g4_000"{
    Character_ChFace(0, 0, 9);
    Character_BlinkStart(13, 2, (#1));
    Character_Chara_GS2(13, "G4_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q1213000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Hah...\nThe school field trip will finally\nend tomorrow.\nI'm feeling sad...");
    Message_Who(0);
    Message_MsgDisp("主人公", "*Giggles* You were very bubbly today\nweren't you, ｛Mizushima＊＊｝?");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(13, 2, (#1));
    Voice_PlayVoice("Q1213000_M00100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Really?\nI was sort of like a pleased child.\n*Giggles*");
    Character_BlinkStart(13, 3, (#1));
    Voice_PlayVoice("Q1213000_M00200", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Hey?\nCan the two of us go on a trip again\nsomeday?\nWe'll take it a little more easy\nnext time.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah.\nLet's come back here together again\nsomeday.");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 60, 6);
    }
