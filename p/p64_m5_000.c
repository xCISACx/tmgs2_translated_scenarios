section "p64_m5_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh.\nSomehow, it seems like it was a\nsuccess.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6405000_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was very good...\nProbably because I felt relaxed\nwhile listening to it...\nI'm sleepy～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Chris＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, that was a huge failure...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("P6405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Don't be so down.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Halfway through, my eyes were wide\nopen.\nYour performance is the best at\nwaking me up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have practiced\nmore...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh.\nSomehow, it seems like it was a\nsuccess.)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "P6405000_E00300");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nIt was very good!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝! Really?");
            Voice_PlayVoice("P6405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nHey, what game was that song from?");
            Voice_PlayVoice("P6405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Seeing you play made me want to play\nit, too!\nTeach me how to play later.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Chris＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, that was a huge failure...)");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Voice_PlayVoice("P6405000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Your feelings now...\nJust like a game, it has a \"game\nover\" feeling, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6405000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It was bad luck...\nYou would have cleared it if it was\na little better, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have practiced\nmore...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh.\nSomehow, it seems like it was a\nsuccess.)");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nW-What's up?");
            Voice_PlayVoice("P6405000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm kinda touched...\nSeeing you do your best up there was\nexhilarating...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6405000_E00900", 5, "P6405000_E00901");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thank you for this emotion,\n｛主人公｝.\nI'll do my best, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Chris＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, that was a huge failure...)");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(5, "M5_01F", 0);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Voice_PlayVoice("P6405000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "At the very end, there was a\nheartbreaking downfall...");
            Message_Who(0);
            Message_MsgDisp("主人公", "......");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6405000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Though it's a bitter page in your\nteenage years, I think that it will\nbecome part of your amazing\nmemories.");
            Voice_PlayVoice("P6405000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So cheer up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...\nThank you, ｛Chris＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have practiced\nmore...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
