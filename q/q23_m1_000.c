section "q23_m1_000"{
    Character_ChFace(0, 0, 9);
    Message_Who(0);
    Message_MsgDisp("主人公", "Hey, what are you all doing?");
    Voice_PlayVoice("Q2401000_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "It's better not to know...\nI'm going back to my room soon.");
    Message_Who(0);
    Message_MsgDisp("主人公", "W-Why...?");
    Character_ChFace(0, 2, 1);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Q2401000_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "This room is a little dangerous now.");
    SoundEffect_PlayStream(3, "SS_T_00_115_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(1, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "Wah!");
    Screen_WipeIn(2);
    Message_CloseMsg();
    }
