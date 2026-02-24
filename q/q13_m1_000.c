section "q13_m1_000"{
    int var0;
    var0 = System_Randam(0, 100);
    if (Parameter_GetCh1Param(1, 130) < 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is...\nAh, there!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yo. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to spend the free day\ntogether?");
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("Q0401000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Impossible.\nI've already made my schedule....\nLet me guess, you haven't, yet?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah... It's okay... Sorry.");
        Character_Chara_GS2(1, "NON");
        }
    else if (Parameter_GetCh1Param(1, 130) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is...\nAh, there!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yo. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to spend the free day\ntogether?");
        if (var0 <= 60){
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("Q0401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Sounds good...\nBut will you have fun visiting\nplaces with me?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it'll be fun. Well, let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(2, 2, 1);
            System_GlobalWork(0, 2, 2);
            System_Call_GS2("Q16", "M1", 0);
            System_Call_GS2("Q17", "M1", 0);
            }
        else if (var0 >= 61){
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("Q0401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Impossible.\nI've already made my schedule....\nLet me guess, you haven't, yet?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah... It's okay... Sorry.");
            Character_Chara_GS2(1, "NON");
            }
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is...\nAh, there!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0401000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Aah, good morning.\nYou're cheerful, huh?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to spend the free day\ntogether?");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q0401000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'll go...\nBut don't speak so loudly, the guys\nover there are in our class and--");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yay! Let's go then!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("Q0401000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Listen to me!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 1);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M1", 0);
        System_Call_GS2("Q17", "M1", 0);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Saeki＊＊｝ is...\nAh, there!)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝!");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(1, "M1_01F", 0);
        Voice_PlayVoice("Q0401000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Good morning. What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, do you want to spend the free\nday together?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0401000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That's the plan.\nI haven't thought of anything, so\nyou'll have to be the guide.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay! Please treat me well today.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_GlobalWork(2, 2, 1);
        System_GlobalWork(0, 2, 2);
        System_Call_GS2("Q16", "M1", 10);
        System_Call_GS2("Q17", "M1", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
