section "b04_m1_250"{
    int var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_BH111_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_01_004_D00", 127, 40);
        Voice_PlayVoice("B0401250_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Welcome to the other half of\nSangosho.");
        Message_MsgSel("Wow, what an amazing room!", "It has the feeling of a boyish room.", "H-How should I put it, it's a unique room.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401250_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, I'm quite proud of my room.\nI don't really show it to people,\nthough.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401250_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really?\nI thought it was nice and clean,\nthough...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401250_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, that's what I had intended it\nto be.\nYour way of saying it was strange...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_BH111_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_01_004_D00", 127, 40);
        Voice_PlayVoice("B0401250_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What will you be ordering?");
        Message_MsgSel("Please get me a Sangosho Blend.", "I want to talk with ｛Saeki＊＊｝.", "Why don't you forget about the store?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401250_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I understand.\nI will make it for you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401250_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But we do that all the time?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0401250_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, you...\nGo along with the flow....\nHow embarrassing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Background_Bg_GS2("BG_BH111_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_01_004_D00", 127, 40);
        Voice_PlayVoice("B0401250_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I like sitting by this window at\ndawn and listening to the sound of\nthe waves.");
        Message_MsgSel("I'm jealous that you live by the beach.", "That's typical of you, ｛Saeki＊＊｝.", "How romantic▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_BlinkStart(1, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401250_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "For you to say that, it's worth\nliving here.\nBut actually, there are also a lot\nof inconveniences.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 0, (#1), 2);
            Character_ChFace(1, 3, 0);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401250_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, maybe.\nIt's kinda embarrassing though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 3, (#1), 1);
                Voice_PlayVoice("B0401250_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The mood instantly changed into\nsomething stupid...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(1, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401250_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'll show you. Whenever you want.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401250_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, right, not whenever.\nIt has to be at dawn.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Saeki＊＊｝.\nJust calm down and think about it...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0401250_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Ah.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Voice_PlayVoice("B0401250_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Right, yeah.\nIt's even worse at dawn...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My heart was throbbing...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
