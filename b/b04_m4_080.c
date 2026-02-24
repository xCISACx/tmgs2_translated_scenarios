section "b04_m4_080"{
    int var0 = Date_GetDateOption(2, 24);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0404080_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm...\nIt's pretty obvious, but plants are\neverywhere.");
        Message_MsgSel("I'm happy being surrounded by flowers▼", "All these plants make the air so fresh!", "That fruit looks yummy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404080_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Really?\nWhen the petals fall, it'll just\nbecome garbage, so that's a little\nunfortunate.");
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
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404080_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Indeed, rather than being outside,\nshould I say, the oxygen's thick...\nIt smells clean.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404080_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You really are a realist.\nDon't you have any other thing to\nsay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0404080_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I wonder why. I feel a bit drowsy...");
        Message_MsgSel("I'm starting to get sleepy, too.", "Staying up late for guitar practices?", "Since we're here, let's look around.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404080_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You too. What?\nIs the scent relaxing you?");
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
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404080_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Bingo. You got it.\nThe next thing I knew it was already\nbright outside.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404080_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yes, yes...\nYou're pretty unadaptable.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
        Voice_PlayVoice("B0404080_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, if you compared me to a flower,\nwhat would it be?");
        Message_MsgSel("The world's largest flower, the Rafflesia.", "Of course, a large rose.", "A secretly blooming Philadelphia Daisy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404080_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's indeed the largest flower in\nthe world but, did you say it\nbecause you smelled it before...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404080_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Beautiful flowers have thorns,\nright!\nYou have a good way of saying\nthings.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404080_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What kind of flower is a\nPhiladelphia Daisy?\n... Perhaps, it's an ordinary one!?\n*sigh* I shouldn't have asked.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404080_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Philadelphia Daisy...?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0404080_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Perhaps the type where you see them\nsprouting nicely along the city～...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, that.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404080_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nWhy does it have to be that kind?,\nand a plain one too..");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you know what a Philadelphia\nDaisy is?\nThe stalk's weak, but it hangs its\nhead at the bud.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You always looks down at your own\nfeet...");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0404080_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'm not always looking down...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "However, when the flower opens it\nlooks up.");
                Character_ChFace(0, 0, 11);
                Message_Who(0);
                Message_MsgDisp("主人公", "Even though it can easily be\ncrushed, it still can stand up\nstraight.\nIt's small, but blooms beautifully.");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's doing its best, Philadelphia\nDaisy.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404080_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "......... I see... Yeah...");
                Voice_PlayVoice("B0404080_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Do you like that flower?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I do like it.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404080_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well then, whatever....\nJust knowing you'll be watching out\nfor me, then it's fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
