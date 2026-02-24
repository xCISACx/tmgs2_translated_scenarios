section "q23_m4_000"{
    Message_Who(0);
    Message_MsgDisp("主人公", "Hey, what is everyone doing, anyway?");
    Character_ChFace(0, 0, 10);
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("Q2404000_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "It's obvious that we'd decide to do\nthis on one of the field trip\nnights, right?!");
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(4, 2, (#1));
    Voice_PlayVoice("Q2404000_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Pillow fight!");
    SoundEffect_PlayStream(3, "SS_T_00_115_M00");
    Screen_StartShakePlane(0, 32, 32, 0, 32);
    System_Wait(124);
    Message_Who(0);
    Message_MsgDisp("主人公", "Wah!");
    Character_Chara_GS2(4, "NON");
    Message_CloseMsg();
    }
