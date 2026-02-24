section "o08_m3_000"{
    Screen_WipeIn(2);
    if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 546) == 1)){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next up is ｛Hikami＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0803000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You...\nI apologize if I step on your foot.");
            Character_Chara_GS2(3, "NON");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next up is ｛Hikami＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0803000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You...\nI request that you please treat me\nwell.");
            Character_Chara_GS2(3, "NON");
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next up is ｛Hikami＊＊｝.)");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("", 3, "O0803000_C00200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, allow me to\nlead with my utmost best.\nUmm, hand! ... Take my hand.");
            Character_Chara_GS2(3, "NON");
            }
        }
    else if ((Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 546) == 0)){
        if (Parameter_GetCh1Param(3, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next up is ｛Hikami＊＊｝.)");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0803000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Y...You! ...... How unusual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm, ｛Hikami＊＊｝...?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("O0803000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "N-No, it's nothing.\nThis is a folk dance, a mere school\nevent...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("O0803000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... It can't be helped.\nPlease, lend me your fingertips.\nA gentleman must keep his distance.");
            Character_Chara_GS2(3, "NON");
            Parameter_InCh1Param(3, 546, 51);
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Next up is ｛Hikami＊＊｝.)");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_08F", 0);
            Voice_PlayVoice("O0803000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I should not be nervous.\nIt's only a mere school event, I\nparticipate in everything...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Hikami＊＊｝?");
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("O0803000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Oh no, hey there...\nSelf-hint, do not fall down.\nDancing with you is essential.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("O0803000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Umm... Your hand.\nAm I allowed to take it?\nIt is a rule.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, please treat me well!");
            Character_Chara_GS2(3, "NON");
            Parameter_InCh1Param(3, 546, 51);
            }
        }
    Parameter_AddCh1Param(3, 60, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(3, "NON");
    Parameter_AddCh1Param(3, 86, 1);
    }
