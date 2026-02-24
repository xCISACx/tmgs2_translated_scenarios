section "b04_m5_161"{
    int var0 = Date_GetDateOption(2, 45);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405161_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What should we do?");
        Message_MsgSel("Let's check our compatibility!", "There's a stuffed toy that I want.", "As expected, fighting games!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405161_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But we can already see the results?\nAh, you mean that it gives you a\nfortune?\nLet's do it, then▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405161_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay▼ Which one do you want?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0405161_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're suddenly in the mood to\ncompete?\nWhy don't you try being a little\nmore laid back?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405161_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, sticker photos...");
        Message_MsgSel("Eh, you've never taken any before?", "It can take photos.", "Take one by yourself as a memory of today.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405161_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're actually right.\nI really wanna take sticker photos.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405161_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh...\nSo it's a photo studio for cute\ngirls.\nHey, let's try it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405161_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, I will... Hey... by myself...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405161_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Fighting games are hard...\nI can't do the move that I want to\ndo.");
        Message_MsgSel("This is addicting.", "The \"Absorbing Fist\" move is easy to do.", "You'll do something if you button mash.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405161_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, I kinda understand what you\nmean.\nYou get into it because you want to\nbe able to do that move.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405161_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow, what an amazing name.\nHow do you do it?\nUp, up, down, down, left, right,\nleft, right, B, A...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405161_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Button mashing... That's bad～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405161_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Button mashing...\nyou mean hitting several buttons at\nthe same time?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Right.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405161_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405161_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's both try and remember the\nmoves.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0405161_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Since we're playing, wouldn't it be\nbetter if we learned the moves\nproperly?");
                Voice_PlayVoice("B0405161_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Also...");
                Voice_PlayVoice("B0405161_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It would be amazing if we could\nmaster the moves.\nDon't you think it's more fun that\nway?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Maybe.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405161_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's hurry and start with the\nspecial training, then.");
                Voice_PlayVoice("B0405161_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, there's a move we can unleash if\nwe combine our powers together.\nDo you wanna try learning that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
