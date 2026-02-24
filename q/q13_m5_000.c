section "q13_m5_000"{
    int var0;
    var0 = System_Randam(0, 100);
    if (Parameter_GetCh1Param(5, 130) < 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("", 5, "Q0405000_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "What's up, ｛主人公｝?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Um, do you want to spend our free\ntime together?");
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("Q0405000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Sorry...\nSome cute girls asked me earlier and\nI said okay.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see... Okay.\nSorry for asking you out of the\nblue.");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q0405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Don't worry about it.\nJust ask me another time.\nNow then, I'll see you later.");
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh. That's too bad!)");
        }
    else if (Parameter_GetCh1Param(5, 130) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("", 5, "Q0405000_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "What's up, ｛主人公｝?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, do you want to spend our free\ntime together?");
        if (var0 <= 60){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0405000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Alright. You're the first to ask.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(2, 2, 5);
            System_GlobalWork(0, 2, 2);
            System_Call_GS2("Q16", "M5", 0);
            System_Call_GS2("Q17", "M5", 0);
            }
        else if (var0 >= 61){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("Q0405000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Sorry...\nSome cute girls asked me earlier and\nI said okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I see... Okay.\nSorry for asking you out of the\nblue.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Q0405000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Don't worry about it.\nJust ask me another time.\nNow then, I'll see you later.");
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh. That's too bad!)");
            }
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("Q0405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good morning.\nYou're quite energetic▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning.\nHey, do you want to spend our free\ntime together?");
        Voice_PlayVoice("Q0405000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Of course!\nIt sounds like a lot of fun.\nPlease treat me well.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 5);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M5", 0);
        System_Call_GS2("Q17", "M5", 0);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, he's here!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_01F", 0);
        Voice_PlayVoice("Q0405000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Good morning. What is it?\nWhy do you look so happy?\nYou're gonna make me smile, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha.\nYou're already smiling,\n｛Chris＊＊｝.\nDo you want to spend our free time\ntogether?");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("Q0405000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow, amazing.\nI was just gonna ask you.");
        Voice_PlayVoice("Q0405000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Of course.\nI get to have you all to myself\ntoday.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank gosh. Let's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 5);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M5", 10);
        System_Call_GS2("Q17", "M5", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
