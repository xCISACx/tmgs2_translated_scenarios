section "p83_m3_000"{
    Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Preparations are OK!\nNow, we'll just have to wait for it\nto start...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Voice_PlayVoice("P7303000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is almost time to open.\nYou are in charge of the tea.\nI will entrust you with this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, leave it to me!");
            Character_Chara_GS2(3, "NON");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "P7303000_C00100");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, please serve\ntwo cups of green tea.\nI ask that you also replenish the\nteacakes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay! ...\nUmm, two cups of tea and a\nreplenishment of the teacakes.");
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Preparation's OK!\nNow, we'll just have to wait for it\nto start...)");
            Voice_PlayVoice("", 3, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("P7303000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is almost time to open.\nYou are in charge of the tea.\nHowever, there will be many dishes\nto wash.\nPlease do your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, leave it to me!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7303000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I am glad to hear that from you.\nI would appreciate it if you follow\nthrough without my supervision.");
            Character_Chara_GS2(3, "NON");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("", 3, "P7303000_C00400");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝, please serve\ntwo cups of green tea.\nI ask that you also replenish the\nteacakes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay! ...\nUmm, two cups of tea and a\nreplenishment of the teacakes.");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "... Umm, I guess this is everything.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "P7303000_C00500");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nHave you completed the material\nlist?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nYes, it's perfect!");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P7303000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.... It is almost time to open.\nI will run down to look at the\nentrance gate.");
            Character_Chara_GS2(3, "NON");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7303000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I did not have to go, they made\nlines at the entrance.\nI can even see it from the window.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, wow!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("", 3, "P7303000_C00800");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nAfter replenishing the pamphlets at\nthe information desk, could you\nstraighten the line?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, understood.");
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nUmmm, I guess this is everything.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "P7303000_C00900");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nHave you completed the material\nlist?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nIt's alright. Everything is set.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7303000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Very promising....\nIt's almost time to open.\nI will run down to look at the\nentrance gate.");
            Character_Chara_GS2(3, "NON");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7303000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I did not have to go, they made\nlines at the entrance.\nI can even see it from the window.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, wow!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7303000_C01200", 3, "P7303000_C01201");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Your turn, ｛主人公｝.\nAfter replenishing the pamphlets at\nthe information desk, could you\nstraighten the line?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, understood!");
            }
        }
    else {
        if (Parameter_GetCh1Param(3, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "... Preparations in the gym are OK.\nOkay, confirmation's done!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "P7303000_C01300");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nAre you done checking with the\nprogress?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nEach chairman's confirmation was\ntaken by the director.\nSo far, no problems!");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P7303000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Roger.\nPlease stand by at the\nadministration head office, then.\nAt last, time for the opening.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Character_Chara_GS2(3, "NON");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7303000_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "A quick errand, a lost child.\nI will inform the broadcast group.\nI would like for you to look after\nthis child.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, leave it to me!");
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "... Preparations in the gym are OK.\nOkay, confirmation's done!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Music_PlayBGM(0, "MN_C_03_000_D00", 127, 40);
            Voice_PlayVoice("", 3, "P7303000_C01600");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nAre you done checking with the\nprogress?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Hikami＊＊｝.\nEach chairman's confirmation was\ntaken by the director.\nSo far, no problems!");
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("P7303000_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I see.\nWell, the terrifying part begins,\nafter this.\nWe don't know what will happen　once\nwe have　opened.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P7303000_C01800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "But, if it is you...\nThings will go about smoothly.\nA senior in charge of the floor is a\nserious responsibility.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes, I will try my best!");
            Character_Chara_GS2(3, "NON");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Voice_PlayVoice("P7303000_C01900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "A quick errand, a lost child.\nI will inform the broadcast group.\nI would like for you to look after\nthis child.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, leave it to me!");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P84", "M3", 0);
    }
