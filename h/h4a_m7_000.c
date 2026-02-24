section "h4a_m7_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(7, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(7, "M7_17F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A07000_G00200", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The Baseball Club did it!\nThey're finally the champions.\nThey're the #1 team in Japan.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes! The players are really amazing!");
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4A07000_G00300", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "The Cheerleading Club also worked\nhard.\nYou went on the same journey as the\nBaseball Club.");
                Character_BlinkStart(7, 2, (#1));
                Voice_PlayVoice("", 7, "H4A07000_G00401");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... ｛主人公｝.\nI think that you also worked as hard\nas the Baseball Club.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I don't think so...");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A07000_G00500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I don't tell lies.\nYou are also Japan's");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(7, 130) >= 4){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(7, "M7_17F", 0);
                Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("H4A07000_G00900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "I wanted to sing the school song at\nthe end, too...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes... It is very unfortunate.");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(7, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4A07000_G01100", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... Let us both sing it. Quietly.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(7, 0, (#1));
                Voice_PlayVoice("H4A07000_G01200", 7, "H4A07000_G01201");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Since you did your best cheering,\nthey should forgive you,\n｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was unfortunate...\nBut I'm glad that I stayed in the\nCheerleading Club.)");
                }
            }
        }
    else {
        if (Parameter_GetBkParam(4, 52) >= 320){
            if (Parameter_GetCh1Param(7, 130) >= 4){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(7, "M7_17F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("", 7, "H4A07000_G01600");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Did you see, ｛主人公｝?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Of course!\nCongratulations on the championship\nvictory, ｛Wakaouji＊＊｝!");
                Character_BlinkStart(7, 3, (#1));
                Voice_PlayVoice("H4A07000_G01700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Thank you.\nI want to hear those words many\ntimes.\nI am feeling very blissful right\nnow.");
                Character_BlinkStart(7, 0, (#1));
                Voice_PlayVoice("H4A07000_G01800", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "...\nThe cute athletes stood at the very\ntop of the winner's podium and\nsmiled.\nLet's wave from here.");
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4A07000_G01900", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Your voices became their tailwind.\nThank you for the passionate\ncheering.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Don't... mention it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm really glad I joined the\nCheerleading Club...\nThis is the best day!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(7, 130) >= 4){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(7, "M7_17F", 0);
                Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("", 7, "H4A07000_G02401");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... ｛主人公｝.\nI'm sorry that the athletes could\nnot do it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't have to...!\nOur cheer was lacking.\nIt is we, who are sorry.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H4A07000_G02500", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "... As expected.\nI thought you would say that.\nYou are gravely mistaken.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Voice_PlayVoice("H4A07000_G02600", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "All the athletes are grateful for\nyour frantic cheering....\nI am grateful, too.");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4A07000_G02700", #1, "");
                Message_Who(7);
                Message_MsgDisp("Wakaouji", "Even if the competition is over, you\nare still supporting the athletes.\nSo cheer up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay...\nThank you very much,\n｛Wakaouji＊＊｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was unfortunate...\nBut I am glad that I did my best\nuntil the very end.)");
                }
            }
        }
    Parameter_AddCh1Param(7, 86, 1);
    }
