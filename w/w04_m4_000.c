section "w04_m4_000"{
    if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 549) == 1)){
        if (Parameter_GetCh1Param(4, 130) >= 0){
            Character_Chara_GS2(4, "M4_??F", 0);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("W0404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, a person of my social status\nshouldn't have to wait on you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-I'm sorry...");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll give you a break this time.\nYou took the time to come here, so\nlet's have some fun!");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 549) == 0)){
        if (Parameter_GetCh1Param(4, 130) <= 2){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(4, "M4_??F", 0);
            Voice_PlayVoice("W0404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... You! Why are you here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I was invited, that's why...");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("W0404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "A-Ah, I see...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("W0404000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nOi, just watch where you walk, okay?\nUnless you want to rush and start\nbumping into people, again?");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...?");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(4, "M4_??F", 0);
            Voice_PlayVoice("W0404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, a person of my social status\nshouldn't have to wait on you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-I'm sorry...");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("W0404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll give you a break this time.\nYou took the time to come here, so\nlet's have some fun!");
            }
        Parameter_InCh1Param(4, 549, 42);
        }
    Character_Chara_GS2(4, "NON");
    }
