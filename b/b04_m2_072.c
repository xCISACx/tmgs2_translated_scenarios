section "b04_m2_072"{
    int var0 = Date_GetDateOption(2, 20);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402072_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Having a laid-back day like this now\nand then isn't bad.");
        Message_MsgSel("Look, there's a butterfly flying!", "It seems like napping here would be nice.", "We must be wary of UV Rays!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402072_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You're right.\nI often chased them when I was\nlittle.");
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
            Voice_PlayVoice("B0402072_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nIt'd probably be so comfortable that\nI'd sleep here until night.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0402072_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Is it something to be that worried\nover?\nLet's walk in the shade, then...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402072_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "......... I'm kinda... losing...\nconsciousness...");
        Message_MsgSel("Should we rest for a bit on that bench?", "Shouldn't you go home and sleep, then?", "You'll die if you sleep!!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402072_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, I'm fine. Thanks.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0402072_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That's not it......\nSorry I'm boring. Let's go home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(0, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402072_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm... awake again.\nThat was some face you made.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402072_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's spring...\nFor some reason or another, it\nsmells nice.");
        Message_MsgSel("Eh, what kind of smell?", "It's the smell of flowers and greenery.", "Hmm, I don't know...");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402072_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI can't give you an exact answer.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402072_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I wonder what it is.\nIt smells kind of sweet... Fresh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yes.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402072_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's gentle...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402072_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong, ｛Shiba＊＊｝?");
                Voice_PlayVoice("B0402072_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well... I kinda...\nfeel like I said something real\nembarrassing...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I don't think you did...\nBut it might not be the kind of\nthing you would say,\n｛Shiba＊＊｝.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402072_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Why am I like this when I'm with\nyou?\n*Sigh*... Forget it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402072_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah... I see, right.\nThere's a kinda sweet feeling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402072_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It might just be my imagination, so\ndon't worry about it.");
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
