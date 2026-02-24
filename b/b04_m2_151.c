section "b04_m2_151"{
    int var0 = Date_GetDateOption(2, 43);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402151_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Should we start?\nDid you do warm-ups?");
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402151_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Roll the ball and knock the 10 pins\nover....\nI'm kidding.\nI can teach you how to bowl.");
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
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402151_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah, okay. You can go first.");
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
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402151_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Right.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402151_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey... Isn't that ball heavy?");
        Message_MsgSel("Well it is a bit large...", "Not at all!", "Yeah, it's like my arm will break▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402151_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right. You should...\nA 7 pound ball should be right for\nyou.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402151_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What amazing strength...\nThat weighs 15 lbs.");
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
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402151_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Don't say dumb things, and hurry up\nand swap it for a smaller ball.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 8);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402151_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ack, gutter ball...\nHow long has it been since I bowled\none of those...");
        Message_MsgSel("Don't mind, aim for a strike!", "The gutter should be cleaned, sometimes.", "Wow～... This is, this is...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402151_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nAlright, I'll definitely get a\nstrike.\nJust watch.");
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
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402151_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hm... Y-Yeah.\nPlease refrain from doing that.");
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
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0402151_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What...? Say it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0402151_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*... How uncool...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But doesn't this kind of thing\nhappen?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402151_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hmm...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Everyone fails.\nYou should have a few times where\nyou feel down and then move on.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402151_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Hehe.\nI kind of said something cheesy.\nEven though we came here to have\nfun, too.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402151_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?\nWhat's the matter,\n｛Shiba＊＊｝?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402151_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Those words...\nThey've somehow touched my heart.");
                Message_Who(0);
                Message_MsgDisp("主人公", "R-Really?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402151_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Soon...\nIf only I had met you sooner...");
                Voice_PlayVoice("B0402151_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "............");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...?\nWhat's the matter with\n｛Shiba＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
