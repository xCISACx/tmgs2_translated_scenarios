section "b04_m4_222"{
    int var0 = Date_GetDateOption(2, 67);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0404222_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This feels great!\nThe view is entirely different from\nwhat we see at our school's rooftop!");
        Message_MsgSel("It feels like we've captured the world!", "I wonder what the past view was like.", "Your legs are trembling.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404222_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah!\nI want to cherish this feeling in\nthe music industry.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404222_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That would be completely different.\nI'd go see it if I could.");
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
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404222_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "They're not trembling.\nIt looked that way because you\nyourself are trembling, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404222_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I wonder how it feels to have your\nown castle.");
        Message_MsgSel("It will surely feel great!", "Build one once you're big and famous.", "It's like building a house.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404222_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's a feudal lord's, anyway.\nI'd probably get hooked if I tried\nit once, huh?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 8);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404222_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, yeah!\nJust wait, someday I'll build\nHarry's castle and you'll get to be\ninvited!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404222_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, yeah... Not!\nI'm talking about a real castle!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404222_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "True, it is huge.\nAre you thinking of living in a\ncastle?");
        Message_MsgSel("I wonder how many LDKs there are?", "If it's a castle, I'd want to live in it!", "It'll be so hard to clean it, so no.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404222_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Maybe it's less than 100?\nBut, a castle is not appropriately\nmeasured by its LDKs～");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404222_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This place wasn't a place for living\nlife, back then.\nBut, I'd say the peak is pretty\nnice!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404222_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "In such a place like this it must be\nrewarding!\nFor sure, I'd get crazy with wiping\nthe tatami with a dry cloth.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404222_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "In such a place like this it must be\nrewarding!\nFor sure, I'd get crazy with wiping\nthe tatami with a dry cloth.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you love cleaning,\n｛Hariya＊＊｝?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404222_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh?\nYeah, not exactly cleaning, I like\norganizing.\nOriginally, I hated cleaning.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ooh～. What happened...");
                Voice_PlayVoice("B0404222_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "There was a time where an avalanche\nof magazines, music chords and\nwritten lyrics notes fell--");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404222_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "And so, everyone in the family\nscolded me so bad.\nI got really scared that time...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0404222_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "And it was then that I started to\nact appropriately, to line it all up\naccordingly and I just couldn't get\nenough of it.");
                Voice_PlayVoice("B0404222_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I guess, that's where it started.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404222_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Even today, in my family, I excel at\norganizing!\nSo what do you think?\nAwesome, isn't it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'm surely going to be scolded\nseverely...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
