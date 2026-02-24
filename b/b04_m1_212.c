section "b04_m1_212"{
    int var0 = Date_GetDateOption(2, 64);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401212_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's kinda... just dogs and cats.\nWell, it was obvious, though.");
        Message_MsgSel("Wah, they're extremely cute▼", "Which do you like, ｛Saeki＊＊｝?", "They fight because they get along.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, cute things are cute.");
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
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Dogs. I like how they're so obtuse.");
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
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401212_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Even though you say that...\nWhat are you talking about?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401212_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I kinda wonder...\nif there are ones that look\nstronger.");
        Message_MsgSel("But the Great Danes look strong?", "But the Akita dogs are large?", "But the Shepherds look strong?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Which? Ah, that one! You're right...\nCool.\nI kinda get the feeling that it's\nimpossible to win against it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe. But they seem good- natured.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, well, maybe....\nBut it really does have this \"doggy\"\nfeeling to it.\nPick out another one.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401212_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey, you've had enough already,\nright?\nYou don't even get sick of this,\neven though it's just dogs and\ncats...");
        Message_MsgSel("I forget time when I watch their behaviour.", "Because they're cuter than you!", "Because they've grown attached to me.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh, is that so...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(1, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401212_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Shut up.\nAnyway, I'm fine with not being\ncute.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0401212_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I'm just saying, but I have parts of\nme that are as cute as these guys.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hah, what a weird thing to not want\nto lose to.\nAlright, then...)");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh～ You don't!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401212_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I do.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Then what do kittens say?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401212_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Meow～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm～... What about puppies?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401212_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... W-Woof.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Am I perhaps being too mean?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401212_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nI really do understand that it's\neasy to grow attached to you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
