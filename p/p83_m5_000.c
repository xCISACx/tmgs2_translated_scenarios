section "p83_m5_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah...\nmy eyes are going round and round!\nI'm busier than usual during the\nCulture Festival.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("P7305000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Hi.\nWhat's up?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7305000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You know?\nDo you need green tea leaves?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Green tea leaves?\nDo you perhaps mean high quality\ngreen tea...");
            Voice_PlayVoice("P7305000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, yeah.\nThere are lots of people coming\nhere, so someone told me to bring\nsome.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, that high quality tea.\nJust wait a moment.");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah...\nmy eyes are going round and round!\nI'm busier than usual during the\nCulture Festival.)");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nWhat's up?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("P7305000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Green tea leaves.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Voice_PlayVoice("P7305000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I mean you're in charge of the green\ntea leaves, right?");
            Voice_PlayVoice("P7305000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The teacher told me to brings some\nto the class.");
            Message_Who(0);
            Message_MsgDisp("主人公", "In charge of the tea leaves...?\nI'm... Ah! High quality green tea!?");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P7305000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh?");
            Message_Who(0);
            Message_MsgDisp("主人公", "He meant high quality green tea.\nDidn't he mean to tell you to bring\nthat back to class?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7305000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "He...\nHe said that he was a good guy, so\nthat he needed special attention～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha.\nWell it certainly is high quality\ntea.\nWait a moment, I'll get it for you.");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "The additional pamphlets will arrive\nfrom the print shop soon～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nNow all there is left to do is\nwait!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("P7305000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Hi.\nHow is the Art Club doing?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7305000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Perfect, but we don't have enough\npamphlets.");
            Voice_PlayVoice("P7305000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So, is it okay if I wait here, too?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sure.");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "The additional pamphlets will arrive\nfrom the print shop soon～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Phew*...\nNow all there is left to do is\nwait!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("", 5, "P7305000_E01100");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝, hello.\nHow are you doing?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nI'm doing fine.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7305000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see.");
            Voice_PlayVoice("P7305000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hey, I want to hand out those\npamphlets at the Art Club, so can I\nwait here?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, it'll take some time.\nSo I'll bring them to you.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7305000_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's fine....\nI want to stay here with you until\nthe pamphlets get here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7305000_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I hope the pamphlets take their time\ngetting here▼");
            }
        }
    else {
        if (Parameter_GetCh1Param(5, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Food & Drink and Hygeine people, be\nthorough.\nAnd people in the halls, watch out\nfor signs that are jutting out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nBeing in charge of the floor is\ntough!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("", 5, "P7305000_E01600");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝, hello.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Hello.\nWhat's up?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7305000_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I have a favor to ask, there are a\nlot of things in the art preparation\nroom.");
            Voice_PlayVoice("P7305000_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So I'd like to reserve some space in\nthe safe area...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Got it! Just wait a second.");
            }
        else if (Parameter_GetCh1Param(5, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "Preparations for the gymnasium are\nokay...\nOkay, confirmed!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nIt seems like the Art Club was a\nsuccess.\nI caught a glimpse.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7305000_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nYou should've called out to me...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I thought about it, but you seemed\nbusy...\nSorry.");
            Character_BlinkStart(5, 0, (#1));
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7305000_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I-It's fine!\nSorry, whenever I see your face, I\nunintentionally say selfish\nthings...");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("P7305000_E02100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, right.\nCan we get some space to store the\nArt Club's things?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why?");
            Voice_PlayVoice("P7305000_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There art preparation room has a lot\nof things in there, it's\noverflowing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is that so.\nGot it, just wait a second!");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M5", 0);
    }
