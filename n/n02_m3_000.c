section "n02_m3_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The top rank.... You did it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The top rank....\nI'll be victorious next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The top rank....\nAs expected, you always make a great\neffort.");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("N0203000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I should do my best, just like you\nare....\nCongratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You did well.\nYou've attained a good rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the effort was rewarding.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Isn't that quite a high rank?\nI can see the great effort.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the effort was rewarding.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "N0203000_C00600");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nAs expected, I believe that's a high\nrank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the effort was rewarding.)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It's normal.\nIt's acceptable, but not improper.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good.\nI need to try a little harder.)");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt's unexpected, I thought you would\nattain a higher rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good.\nI need to try a little harder.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("N0203000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Try a little harder.\nYou are not the kind of person to\nstop at this point, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good!\nBut I need to try a little\nharder...)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(3, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Hikami＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "N0203000_C01000");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nWhere was your rank?\nI wasn't able to see it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, awful results...\nI need to try a little harder.)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(3, "NON");
                }
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Hikami＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "N0203000_C01100");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nYour name isn't posted.\nThus, you must prepare more.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, awful results...\nI need to try a little harder.)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(3, "NON");
                }
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "... ｛Hikami＊＊｝.");
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "N0203000_C01200");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nThough I shouldn't say this, I\nbelieve it's the student's\nobligation to study.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("N0203000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Therefore, these results are a\nlittle...\nHonestly, I was surprised.\nWas your mind out of order?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, awful results...\nI need to try a little harder.)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(3, "NON");
                }
            }
        }
    Parameter_AddCh1Param(3, 86, 1);
    }
