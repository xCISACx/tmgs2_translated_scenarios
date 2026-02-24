section "b04_m1_222"{
    int var0 = Date_GetDateOption(2, 67);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401222_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh... It's higher than I thought.\nYou can see the town quite well.");
        Message_MsgSel("It feels like we've captured the world!", "I wonder what the past view was like.", "Your legs are trembling.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401222_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe.\nIn the past, the owner of the castle\nlooked down on the town from here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401222_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It was probably extremely different\nto how it is now.\nEven the coastline.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401222_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm the best at handling high\nplaces.\nI'm sorry for not doing what you\nwanted me to, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401222_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "For some reason, when you get a good\nlook of the town, don't you think of\nelementary school classes?");
        Message_MsgSel("Because we drew on blank maps?", "I want to go back to that time...", "Stop talking about class!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401222_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right!\nWe would also fill out the code for\nthe map!\nHow nostalgic...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401222_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Did something happen then?\nBut thinking about it now, classes\nback then were quite fun.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401222_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... M-My bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401222_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, Hanegasaki Lighthouse...\nYou can also see Sangosho.");
        Message_MsgSel("It makes me feel quite glad!", "It's quite close.", "It looks tiny from here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401222_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I really feel like I gained\nsomething.\nLet's take a photo.\nGrandpa will be happy if I showed\nhim.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401222_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, when you look at it from here.\nEven though it's a long walk.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401222_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Sorry for Sangosho being tiny.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401222_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You're right...\nThat's where I sleep, wake up, and\nwork every day.");
                Message_Who(0);
                Message_MsgDisp("主人公", "When you think about it like that,\nit's mysterious, isn't it?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401222_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah. It really is tiny...\nBut it's my dream.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝ has a nice\nexpression on his face...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
