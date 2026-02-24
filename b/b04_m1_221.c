section "b04_m1_221"{
    int var0 = Date_GetDateOption(2, 66);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401221_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "They've... got a lot of items.");
        Message_MsgSel("They even have things in the textbook!", "I'm troubled as there are lots of things.", "Studying history is tiring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401221_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, it's the real thing.\nI've seen it in textbooks too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401221_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Do you actually love studying or\nsomething?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401221_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "They have no intention of\nentertaining us.\nBut it would've been great if they\nhad flashy things, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401221_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "...\nIt might just be my imagination, but\nit feels like there's a ghost here.");
        Message_MsgSel("Ah, behind you, ｛Saeki＊＊｝...", "It's the feeling of history.", "I'm～ a～ mon～ ster～");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("B0401221_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Liar.... You're lying, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401221_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But it might have been a history\nfull of bloodshed...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401221_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "......... I see.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401221_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, a Japanese sword!\nIt's so beautiful... As expected.");
        Message_MsgSel("The malice of the people it killed...", "It looks like you can cut a cake with it.", "It's been maintained with great care.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401221_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Knock it off! ... I'm going home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401221_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, it could cut one, but...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401221_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hah...\nWhat kind of cake would you cut with\nthat?");
                Message_Who(0);
                Message_MsgDisp("主人公", "A wedding cake.\nSee, the length of the blade is--");
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401221_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... With who?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Oh dear... He's sulking...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401221_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. It's sparkling clean.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
