section "o08_m4_000"{
    Screen_WipeIn(2);
    if ((Parameter_GetPl1Param(312) != 4) || (Parameter_GetCh1Param(4, 546) == 1)){
        if (Parameter_GetCh1Param(4, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Hariya＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0804000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey.\nDon't stagger and step on my feet.");
            }
        else if (Parameter_GetCh1Param(4, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Hariya＊＊｝.)");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0804000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's a rare thing to be able to\ndance with me, you know?\nRemember this moment!");
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, next is ｛Hariya＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0804000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah.... Well, you know. Geez.\nGimme your hand already!");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 4) && (Parameter_GetCh1Param(4, 546) == 0)){
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, next is ｛Hariya＊＊｝.)");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0804000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, it's you.\nAlright, this is another one for the\nlist of things you can brag about!");
            Parameter_InCh1Param(4, 546, 51);
            }
        else if (Parameter_GetCh1Param(4, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, next is ｛Hariya＊＊｝.)");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(4, "M4_08F", 0);
            Voice_PlayVoice("O0804000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... It's you.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("O0804000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Please treat me well.");
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("O0804000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Just be normal! Normal, be normal...\nCrap, I'm getting nervous...");
            Parameter_InCh1Param(4, 546, 51);
            }
        }
    Parameter_AddCh1Param(4, 60, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(4, "NON");
    Parameter_AddCh1Param(4, 86, 1);
    }
