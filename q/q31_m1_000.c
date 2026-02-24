section "q31_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, ｛Saeki＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(1, 2, (#1));
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0901000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's time to leave. Are you ready?");
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("Q0901000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ seems\nsleepy...\nIs he half asleep?)");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh, ｛Saeki＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(1, 2, (#1));
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0901000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Good morning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Are you sleepy?");
        Character_BlinkStart(1, 0, (#1));
        Voice_PlayVoice("Q0901000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Right. I didn't sleep soundly...\nI hope you don't mind me falling\nasleep on the way.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, ｛Saeki＊＊｝ is\nalready here...!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry, did I make you wait?");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(1, 2, (#1));
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0901000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry▼");
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0901000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "...\nSince you're a little cute, I'll\nforgive you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yay!");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0901000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ready to go?");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
