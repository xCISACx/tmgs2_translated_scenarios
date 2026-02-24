section "n02_m6_000"{
    if (Parameter_Test_Check() == 0){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_01F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("N0206000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai!\nGetting the top rank is amazing.\nI respect that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I did my best.)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("N0206000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The top rank!? Senpai is amazing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        else {
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("N0206000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The top rank...\nIt was very unexpected.\nI am surprised.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0206000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, anyway, congratulations!\nContinue to keep doing your best\nlike this!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth having done my best.)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0206000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai is bright! I respect that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the effort was rewarding!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0206000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's surprising.\nYou studied and did wonderfully!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the effort was rewarding!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("N0206000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai is amazing...\nYou did your best!\nI had to look again for a moment.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes, the effort was rewarding!)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("N0206000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, you still have a long way to\ngo to get to the top?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried a little\nharder...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0206000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hmm...\nWell, you would do something like\nthis.\nStill a long way to go compared to\nme.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried a little\nharder...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0206000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You're not giving it your all.\nIt's not good that you don't study\nproperly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried a little\nharder...)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("N0206000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please do not be discouraged.\nWill you try your best next time?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried a little\nharder...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(6, "NON");
                }
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("N0206000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Pitiful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have tried a little\nharder...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(6, "NON");
                }
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝.");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(6, 3, (#1));
            Voice_PlayVoice("N0206000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You know...\nYou play around a little too much,\nSenpai!");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("N0206000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "People will think that your grades\nhave dropped because you've been\nhanging around with me!\nGet a grip.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI need to try a little harder...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(6, "NON");
                }
            }
        }
    Parameter_AddCh1Param(6, 86, 1);
    }
