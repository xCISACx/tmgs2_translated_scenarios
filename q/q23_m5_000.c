section "q23_m5_000"{
    Message_Who(0);
    Message_MsgDisp("主人公", "It's really noisy in here...\nWhat's going on?");
    Character_ChFace(0, 2, 0);
    Character_BlinkStart(5, 2, (#1));
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Q2405000_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "You're witnessing Japanese\ntradition.");
    Voice_PlayVoice("Q2405000_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "You should also experience it.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Japanese tradition?");
    SoundEffect_PlayStream(3, "SS_T_00_115_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "Wah!");
    Character_Chara_GS2(5, "NON");
    Message_CloseMsg();
    }
