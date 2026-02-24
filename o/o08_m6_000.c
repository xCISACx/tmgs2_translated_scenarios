section "o08_m6_000"{
    Screen_WipeIn(2);
    if ((Parameter_GetPl1Param(312) != 6) || (Parameter_GetCh1Param(6, 546) == 1)){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Amachi＊＊｝.)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0806000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please treat me well.");
            Character_Chara_GS2(6, "NON");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Amachi＊＊｝.)");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0806000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do not fall down!\nSometimes dancing together can be\nembarrassing.");
            Character_Chara_GS2(6, "NON");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Amachi＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("", 6, "O0806000_F00200");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝. Umm...\nPlease treat me well!");
            Character_Chara_GS2(6, "NON");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 6) && (Parameter_GetCh1Param(6, 546) == 0)){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Amachi＊＊｝.)");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0806000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow, Senpai!\nEh, please treat me well... Please.");
            Character_Chara_GS2(6, "NON");
            Parameter_InCh1Param(6, 546, 51);
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Amachi＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0806000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Even with Senpai!\nWhy is it my turn!? ...\nPlease do not fall, so we can dance!");
            Character_Chara_GS2(6, "NON");
            Parameter_InCh1Param(6, 546, 51);
            }
        else if (Parameter_GetCh1Param(6, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next is ｛Amachi＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("", 6, "O0806000_F00500");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝....\nIt's good I came!");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 2, (#1));
            Voice_PlayVoice("O0806000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've been waiting in line to dance\nwith Senpai....\nOkay, your hand, please!");
            Character_Chara_GS2(6, "NON");
            Parameter_InCh1Param(6, 546, 51);
            }
        }
    Parameter_AddCh1Param(6, 60, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(6, "NON");
    Parameter_AddCh1Param(6, 86, 1);
    }
