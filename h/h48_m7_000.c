section "h48_m7_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 7, "H4807000_G00300");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, it is\nstarting.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nYou've worked hard bringing people\nhere.");
            Voice_PlayVoice("H4807000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That is such an insignificant thing\nto say.\nThe Baseball Club is doing their\nbest, so I am too.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4807000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "... You are also quite fired up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, we are at the National High\nSchool Baseball Championships after\nall.");
            Voice_PlayVoice("H4807000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, your face is nice when you are\ncheering.\nIt is very lively.");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("", 7, "H4807000_G00700");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, I will be\ncheering you on, as well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ is also\nwatching...\nAlright, I have to do my best!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) >= 4){
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(We're finally at the Inter High\nSchool Championships!\nIt would be nice if the Track and\nField Club did their best...)");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "H4807000_G01200");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, we are in\nyour favor today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nPlease do your best today!");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4807000_G01300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am not participating.\nOnce it starts, it is each and every\nathletes' own battle.");
            Voice_PlayVoice("H4807000_G01400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nThe athletes are very pumped up\ntoday.\nThey may be a little nervous.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Is that so?");
            Voice_PlayVoice("H4807000_G01500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I plan to make them feel as relaxed\nas I possibly can.\nBut when the real competition draws\ncloser, I get worried.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4807000_G01600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "So I would like to ask the\nCheerleading Club to cheer more than\nthey usually do.");
            Voice_PlayVoice("H4807000_G01700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "...\nPlease cheer so those guys will be\nreminded of the ground at Hanegasaki\nAcademy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...\nPlease leave it to us.\nWe will do our best!");
            Voice_PlayVoice("H4807000_G01800", 7, "H4807000_G01801");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank you.\nWe are in your care,\n｛主人公｝.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I have to do a cheer that\nwill fulfill ｛Wakaouji＊＊｝'s\nwishes!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
