section "q23_m2_000"{
    Message_Who(0);
    Message_MsgDisp("主人公", "Hey, what is everyone doing?");
    Character_ChFace(0, 2, 1);
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("Q2402000_B00000", 2, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nNothing but receiving blows,\n｛主人公｝.");
    SoundEffect_PlayStream(3, "SS_T_00_115_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "What... Wah!");
    Character_Chara_GS2(2, "NON");
    Message_CloseMsg();
    }
