section "q11_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(5, 130) == 3){
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("Q0205000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Have you decided what to do during\nfree time today?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, I still haven't decided yet.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0205000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Then wanna come with me?\nLet's create memories together!");
        Message_MsgSel("Yeah, let's go together!", "Sorry...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("Q0205000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Let's go see the apprentice geishas,\nand then go and see the geishas...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Chris＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0205000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "No good?\nThen I'm fine with doing whatever\nyou wanna do▼");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 5);
            System_Call_GS2("Q16", "M5", 0);
            System_Call_GS2("Q17", "M5", 0);
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("Q0205000_E00401", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see...\nHave a nice trip,\n｛主人公｝...");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nI wonder if that was a bad thing to\ndo...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else if (Parameter_GetCh1Param(5, 130) >= 4){
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q0205000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey.\nWhatcha doing during our free time\ntoday?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I haven't decided on anything yet.");
        Voice_PlayVoice("Q0205000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wanna go together then?\nIt's my first time in Kyoto, so I\ncan't show you around...");
        Voice_PlayVoice("Q0205000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "But I wanna go with you.");
        Message_MsgSel("Yeah, let's go together!", "I'm sorry, but...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0205000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yay. I'm so glad. Thanks.");
            Voice_PlayVoice("Q0205000_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Let's strike while the iron is hot.\nLet's jet▼");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 5);
            System_Call_GS2("Q16", "M5", 10);
            System_Call_GS2("Q17", "M5", 0);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("Q0205000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ugh... Okay.\nI'll see you later, then...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nI wonder if that was a bad thing to\ndo...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
