section "o08_m5_000"{
    Screen_WipeIn(2);
    if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 546) == 1)){
        if (Parameter_GetCh1Param(5, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Chris＊＊｝,\nhuh...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0805000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Welcome, princess.\nI feel grateful, being able to touch\nyour hand....\nKidding.");
            Character_Chara_GS2(5, "NON");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Chris＊＊｝,\nhuh...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0805000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Being able to dance with you is like\na dream▼ Ah, I don't wanna let go of\nyou or your hand...");
            Character_Chara_GS2(5, "NON");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Chris＊＊｝,\nhuh...)");
            Character_ChFace(0, 2, 2);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0805000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nIt's okay to come a little\ncloser....\nCrap～.\nI can't handle you being any closer.\nMy bad～...");
            Character_Chara_GS2(5, "NON");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 546) == 0)){
        if (Parameter_GetCh1Param(5, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Chris＊＊｝,\nhuh...)");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0805000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "First, a greeting kiss......\nCan't we do it?\nThen I'll just hold on tightly to\nyour hand▼");
            Character_Chara_GS2(5, "NON");
            Parameter_InCh1Param(5, 546, 51);
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Chris＊＊｝,\nhuh...)");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(5, "M5_08F", 0);
            Voice_PlayVoice("O0805000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nIt seems like I'd be able to kiss\nyou on the forehead again...\nCrap, my heart is throbbing.");
            Character_Chara_GS2(5, "NON");
            Parameter_InCh1Param(5, 546, 51);
            }
        }
    Parameter_AddCh1Param(5, 60, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(5, "NON");
    Parameter_AddCh1Param(5, 86, 1);
    }
