section "q31_g4_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(13, "G4_01F", 0);
    Message_Who(13);
    Message_MsgDisp("Mizushima", "｛主人公｝.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Good morning, ｛Mizushima＊＊｝!");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(13, 2, (#1));
    Voice_PlayVoice("Q0913000_M00000", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Good morning! It's a fine day today.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yep!\nIt's ideal weather for sightseeing.");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(13, 3, (#1));
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("Q0913000_M00100", #1, "");
    Message_Who(13);
    Message_MsgDisp("Mizushima", "Okay then, let's get going～!\n*Giggles*");
    Character_Chara_GS2(13, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Mizushima＊＊｝ seems happy!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
