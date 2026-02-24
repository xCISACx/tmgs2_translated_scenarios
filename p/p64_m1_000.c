section "p64_m1_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(That went well!\nThe first performance was a\nsuccess!)");
            Character_ChFace(0, 0, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm a guy with nothing to make fun\nof...\nYou did great.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Big mistake...)");
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("P6401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...... Well done.");
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
            Message_MsgDisp("主人公", "(Yeah, I think I performed better\nthan last year!)");
            Character_ChFace(0, 0, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It was a success, right?\nI really envy those who can play\nmusical instruments.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*...\nI think I did worse than last\nyear...)");
            Character_ChFace(0, 0, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P6401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, a thing like this is because\nof \"that\", you know!");
            Message_Who(0);
            Message_MsgDisp("主人公", "... That?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("P6401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I haven't thought of it, yet...\nSorry...");
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
            Message_MsgDisp("主人公", "(It's probably my best performance\nwithin these three years.\nGood...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P6401000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You were amazing!\nReally, it's just a bit of respect.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Thank you!");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P6401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Thank you, too.\nBeing nervous and pleased\ntogether...\nI feel like I was part of the\nCulture Festival.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I made a mistake...\nIt was my last Culture Festival...)");
            Character_ChFace(0, 0, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Hey, don't make that face, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "But...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6401000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You didn't work hard for three years\nfor this day, right?\nI'm sure you've made lots of\nmemories, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6401000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I respect the fact that you know how\nto play the instruments.\nSo, cheer up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank you...\n｛Saeki＊＊｝.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
