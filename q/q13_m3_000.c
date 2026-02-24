section "q13_m3_000"{
    int var0;
    var0 = System_Randam(0, 100);
    if (Parameter_GetCh1Param(3, 130) < 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("Q0403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You... Good morning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, would you like to spend the\nfree day together?");
        Voice_PlayVoice("Q0403000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is impossible.\nI made a perfect plan.\nChanging it now would be difficult.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(How lame!)");
        Character_Chara_GS2(3, "NON");
        }
    else if (Parameter_GetCh1Param(3, 130) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("Q0403000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You... Good morning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, would you like to spend the\nfree day together?");
        if (var0 <= 60){
            Voice_PlayVoice("Q0403000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Me? Oh, I do not mind.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Then let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(2, 2, 3);
            System_GlobalWork(0, 2, 2);
            System_Call_GS2("Q16", "M3", 0);
            System_Call_GS2("Q17", "M3", 0);
            }
        else if (var0 >= 61){
            Voice_PlayVoice("Q0403000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is impossible.\nI made a perfect plan.\nChanging it now would be difficult.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How lame!)");
            Character_Chara_GS2(3, "NON");
            }
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Good morning, ｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "Q0403000_C00300");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning, ｛主人公｝.\nYou seem cheerful this morning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yep!\nUmm, would you like to spend the\nfree day together?");
        Voice_PlayVoice("Q0403000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Aah, very well.\nMay we visit the places I have\nthought about?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, certainly!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 3);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M3", 0);
        System_Call_GS2("Q17", "M3", 0);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hikami＊＊｝ is...\nAh, there he is!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("Q0403000_C00500", 3, "Q0403000_C00501");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning, ｛主人公｝.\nHaving a pleasant morning?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yep! Good morning!\nUmm, would you like to spend the\nfree day together?");
        Character_ChFace(0, 0, 11);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0403000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...........\nY-You want to visit places with me?\nIs that what you are saying?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, that's right.");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0403000_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That... That is a dream come true.\nO-Of course, it is fine.\nThis will be quite fun...!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then it's decided!\nPlease treat me well today.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 3);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M3", 10);
        System_Call_GS2("Q17", "M3", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
