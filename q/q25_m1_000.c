section "q25_m1_000"{
    System_Wait(30);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    Character_ChFace(0, 0, 11);
    Character_Chara_GS2(1, "M1_08F", 0);
    Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    if ((Parameter_GetCh1Param(1, 130) <= 2) && (Parameter_GetPl1Param(312) == 1)){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2601000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "H-Hey... You see...");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q2601000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Have you grown since last year?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(!! As I thought, it was him...)");
        }
    else {
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2601000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "H-Hey... You see...");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q2601000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Another time...\nWhen the teacher won't be coming...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(!! As I thought, it was him...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
