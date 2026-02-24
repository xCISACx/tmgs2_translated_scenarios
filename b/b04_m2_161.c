section "b04_m2_161"{
    int var0 = Date_GetDateOption(2, 45);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0402161_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... So, what should we do?");
        Message_MsgSel("Let's check our compatibility!", "There's a stuffed toy that I want.", "As expected, fighting games!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402161_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That's fine...\nbut fortune and study fortunes?\nYou'll only get good results if you\nput in the effort.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402161_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't know if I can get it or not,\nthough.\nWell, I'll give it a shot.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402161_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Not interested.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402161_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What's so fun about fighting games?\nThere aren't any prizes or anything.");
        Message_MsgSel("The pleasant feeling after you win!", "Satisfaction after executing a move!", "Well... it just is.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402161_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hmm... Well, you're right.\nIt feels good when you win.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402161_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Execute... You're an unusual girl.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402161_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It's a waste of money.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402161_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That...\nThat thing with the curtains.\nThere are a lot of people lining up.");
        Message_MsgSel("You can take sticker photos there.", "You hide in there, and then...", "Sticker photos! Do you want to take photos?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402161_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, is that what it is...?\nSo, what do you use those stickers\nfor?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0402161_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "......... Why are you smiling?");
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
                Voice_PlayVoice("B0402161_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No.\nOnly girls are lining up at the\nmachine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0402161_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThat thing takes your photos, and\nturns them into stickers, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nLet's take photos together,\n｛Shiba＊＊｝.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402161_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "That kinda thing is...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see.\nIt's embarrassing for you, as\nexpected...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402161_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, no.\nI don't mean that I don't want to\ntake a photo with you...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402161_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf you say that you want to take a\nphoto no matter what, then there's\nnothing left to think about...");
                Message_Who(0);
                Message_MsgDisp("主人公", "So, should we take photos?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402161_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Sorry.\nAs expected, I don't wanna go into\nsome glittery place.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Well, it certainly is true that it\ndoesn't suit\n｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
