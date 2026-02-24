section "b04_m2_222"{
    int var0 = Date_GetDateOption(2, 67);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402222_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "We're high up...");
        Message_MsgSel("It feels like we've captured the world!", "I wonder what the past view was like.", "Your legs are trembling.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402222_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Even though all we did was come to a\nplace high up?\nYou're quite relaxed...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402222_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It'd probably be different, like the\nsurrounding buildings would've been\nshorter....\nOi, I'm leaving.");
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
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402222_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Shut up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402222_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The entire place is creaking because\nof the wind...");
        Message_MsgSel("Because it's an old building.", "All buildings collapse!", "It's dangerous today, so let's go elsewhere.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402222_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "So those people could live in these\nconditions.\nI respect them, to a certain extent.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402222_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nOi, are you messing around with me?\nEven if you're serious, you're being\ninsensitive about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402222_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's do that.\nThis sound is making me unbearably\nuneasy.");
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
        Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402222_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "*Phew*...\nI've gotten quite used to this\nplace.\nI think the view from here is\nsuperb.");
        Message_MsgSel("Habataki City is an amazing city!", "Do you feel like the lord of a castle?", "Despite how you look, you're a scaredy-cat～");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402222_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it's a nice place.\nI've lived here ever since I was\nborn, so I'm attached to it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402222_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'm still not going that far.");
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
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402222_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "My appearance...\nWhat exactly do you think of me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402222_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "My appearance...\nWhat exactly do you think of me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? Hmm...\nIt seems like there's nothing you're\nafraid of...\nAnd stuff.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402222_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... There are things I'm scared of.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Monsters? Thunder? Your dad?\nOr...");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402222_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Umm.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402222_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......\nThe ones you just mentioned are all\nwrong.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's the right answer then?");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402222_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "There are a few, but the thing I'm\nscared of the most is you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402222_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nWhat if you weren't there anymore?\nWhen I think about that.........\nI get scared.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
