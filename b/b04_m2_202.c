section "b04_m2_202"{
    int var0 = Date_GetDateOption(2, 16);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402202_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Why does the beach appear so dark\nduring winter?");
        Message_MsgSel("I feel a little sentimental.", "I wonder if there are any sea urchins...", "That lovey-dovey couple looks warm.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402202_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Maybe.\nBut I don't hate it when the beach\nis like this.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402202_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Even if there were, just look at\nthem and don't eat them.\nIf you eat one, you'll get arrested.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402202_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Don't stare at them.\nWhat an embarrassing one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 4);
        Voice_PlayVoice("B0402202_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hm? That thing in the distance...\nWhat is it?");
        Message_MsgSel("Surely, it's the sea monster, Hassy!", "Surely, it's a mirage!", "Surely, it's a pirate ship!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402202_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hassy...?\nAh, you mean it's Habataki City's\nversion of \"Nessie\"?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402202_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You won't see mirages when it's this\ncold, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402202_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha.\nIf it was, I'd wanna see it from up\nclose....\nIt's probably just a large fishing\nboat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402202_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey, do you like the beach in summer\nor winter?");
        Message_MsgSel("As expected, you go to the beach in summer.", "The beach in winter has its charm.", "The ocean that you like...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402202_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, me too.\nAfter all, you only get that\npleasant ocean and blue sky in\nsummer.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1, 35);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402202_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, maybe.\nIn terms of noise, the charms of the\nwinter beach would be the sound of\nthe wind and waves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402202_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh? Don't say random things.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402202_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I...");
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("B0402202_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Prefer the summer beach.\nSomehow, it's pleasant.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402202_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou shouldn't be saying \"Hmm\",\nright?\nWhy did I answer, even though I\nasked you...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Then I also like the summer beach.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402202_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Why?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because I like you,\n｛Shiba＊＊｝.");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402202_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, sorry.\nI meant because you like it,\n｛Shiba＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402202_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402202_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nGive me a break, stuff like that is\nbad for my heart...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
