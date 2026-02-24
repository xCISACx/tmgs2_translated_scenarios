section "b04_m2_235"{
    int var0 = Date_GetDateOption(2, 73);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402235_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That go-cart can go quite fast.");
        Message_MsgSel("It was going too fast...", "Going around the curves was awesome!", "I'll explain my theory of maximum speed...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really?\nI thought it was normal, though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, I get what you mean.\nWasn't that drifting kind of feeling\nexciting as well?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402235_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What the.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402235_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There was a recklessly fast racer...\nAnd we lost to them.");
        Message_MsgSel("Let's get revenge!", "It's important to lose and learn from it.", "That person is surely a pro.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I will, the next time we meet.\nI'm not gonna lose next time...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402235_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What do we learn...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, I see.\nThen if I beat him next time, it\nmeans I'm among the ranks of a pro.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402235_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ahh... This is fun.\nIt really makes me wanna get my\ndriver's license.");
        Message_MsgSel("I also want my driver's license.", "You could probably get one, right?", "If you do, let me ride in the passenger seat▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nMaybe I should go get one as soon as\nI graduate...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402235_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You... Are you making fun of me...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402235_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh? Why?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402235_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It'd be dangerous since I'd be a new\ndriver, so I won't let you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...\nThen let me ride in the passenger\nseat when you've gotten better at\ndriving.");
                Voice_PlayVoice("B0402235_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Okay.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402235_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... You say quite bold things...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? R-Really?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402235_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well...\nIt's fine, as long as what you said\njust came naturally to you...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402235_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If you're fine with me being a new\ndriver, I'll let you ride in the\npassenger seat.");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
