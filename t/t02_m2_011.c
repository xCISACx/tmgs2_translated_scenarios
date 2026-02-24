section "t02_m2_011"{
    Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Screen_WipeOut(3);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 0);
    System_Wait(90);
    Background_Bg_GS2("BG_EX110_SP_1", #1, #1, 0);
    Screen_WipeIn(3);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (System_GlobalWork(2, 1) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Saeki＊＊｝...)");
        }
    else if (System_GlobalWork(2, 1) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Hikami＊＊｝...)");
        }
    else if (System_GlobalWork(2, 1) == 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Hariya＊＊｝...)");
        }
    else if (System_GlobalWork(2, 1) == 5){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Chris＊＊｝...)");
        }
    else if (System_GlobalWork(2, 1) == 6){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Amachi＊＊｝...)");
        }
    else if (System_GlobalWork(2, 1) == 7){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Wakaouji＊＊｝...)");
        }
    else if (System_GlobalWork(2, 1) == 8){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Sorry, ｛Masaki＊＊｝...)");
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "(But as expected, I...)");
    Voice_PlayVoice("", 2, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "｛主人公｝.");
    Character_BlinkStart(2, 2, (#1), 1);
    Character_Chara_GS2(2, "M2_01F", 0);
    Music_PlayBGM(0, "MN_C_02_090_D00", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Shiba＊＊｝! What's up?");
    Character_BlinkStart(2, 0, (#1));
    Voice_PlayVoice("T0202010_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I wanted to talk to you, so I went\nlooking for you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "For me?");
    Voice_PlayVoice("T0202010_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Yeah.... You got time?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah.");
    Character_BlinkStart(2, 3, (#1));
    Voice_PlayVoice("T0202010_B00200", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nBy telling you to forget about it,\nthere was something that was always\nbugging me.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("T0202010_B00300", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... The hurdle.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah... right.");
    Voice_PlayVoice("T0202010_B00400", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nAt first, I had only thought that it\nwas just something unexpected, that\nit was just an accident.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("T0202010_B00500", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "But each time I saw you, I got the\nfeeling that there was more to it...");
    Character_BlinkStart(2, 3, (#1));
    Voice_PlayVoice("T0202010_B00600", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nI thought that it was fate, and I\ngot the feeling that some kinda\nhigher power was at work.");
    Character_ChFace(0, 0, 3);
    Character_BlinkStart(2, 3, (#1));
    Voice_PlayVoice("T0202010_B00700", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "But it's not.");
    Message_Who(0);
    Message_MsgDisp("主人公", ".........");
    Character_ChFace(0, 2, 5);
    Character_BlinkStart(2, 2, (#1));
    Character_ChFace(0, 3, 2);
    Voice_PlayVoice("T0202010_B00800", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "I refuse to believe that it was the\nwork of a higher power....\nI want to win you with my own\neffort.");
    Character_BlinkStart(2, 0, (#1));
    Voice_PlayVoice("", 2, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "｛主人公｝.");
    Voice_PlayVoice("T0202010_B00900", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... I like you.");
    Voice_PlayVoice("T0202010_B01000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Be with me forever.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I want to be with you forever, too.");
    Character_ChFace(0, 0, 11);
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("", 2, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "｛主人公｝...");
    Character_ChFace(0, 0, 11);
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("T0202010_B01200", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", ".........");
    Message_Who(0);
    Message_MsgDisp("主人公", "What's wrong?");
    Character_ChFace(0, 2, 1);
    Character_BlinkStart(2, 3, (#1));
    Character_ChFace(0, 3, 2);
    Voice_PlayVoice("T0202010_B01300", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... I feel nervous now.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Voice_PlayVoice("T0202010_B01400", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Don't look at me.");
    Message_Who(0);
    Message_MsgDisp("主人公", "But now that you tell me to not\nlook, I'm curious...");
    Character_ChFace(0, 0, 3);
    Character_BlinkStart(2, 2, (#1));
    Voice_PlayVoice("T0202010_B01500", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "... Then I'll remove all doubts.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh...");
    Music_StopBGM(0, 40);
    Character_Chara_GS2(2, "NON");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Still_Event("EV_02_23", #1, 1, 120);
    Screen_WipeIn(2);
    System_Wait(120);
    Still_Event("EV_02_23", #1, 0, 120, 0, 1);
    System_Wait(120);
    Screen_WipeOut(3);
    System_GlobalWork(3, 0, 20);
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
    Screen_WipeIn(3);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
