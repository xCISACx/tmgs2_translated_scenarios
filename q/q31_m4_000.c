section "q31_m4_000"{
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, there you are.\nGood morning, ｛Hariya＊＊｝!");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("Q0904000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah.......");
        Message_Who(0);
        Message_MsgDisp("主人公", "Are you just waking up?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q0904000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah...\nWell, just because my eyes haven't\nwoken up doesn't mean I can't walk\neither.\nOkay, let's go...");
        Message_Who(0);
        Message_MsgDisp("主人公", "O-Okay.");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, there you are.\nGood morning, ｛Hariya＊＊｝!");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("Q0904000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... I feel dizzy.... Hey....\nIs it okay to go to bed...?");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(4, 3, (#1));
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!?");
        Character_ChFace(0, 2, 3);
        Voice_PlayVoice("Q0904000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... I didn't sleep.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Are you okay?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q0904000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'll manage.... Okay, let's go.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, I hope he'll be okay...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, there you are.\nGood morning, ｛Hariya＊＊｝!");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("Q0904000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Stupid!\nI've been waiting for a long time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, you were? I'm sorry.");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("Q0904000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is making me feel so strange...\nWell, I couldn't sleep, so I got up\nearly...");
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 1);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0904000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Er-- It's not like that!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh!?");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0904000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway, let's depart! It's time!");
        Message_Who(0);
        Message_MsgDisp("主人公", "O-Okay.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
