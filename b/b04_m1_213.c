section "b04_m1_213"{
    int var0 = Date_GetDateOption(2, 65);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401213_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah! There's the white tiger.");
        Message_MsgSel("Wah～ How rare!", "The blue of its eyes are beautiful.", "Even if it's white, a tiger is still a tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401213_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. How rare...\nI feel like we really gained\nsomething by coming here.");
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
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401213_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're right. Good observation.\nIts eye color is so light.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401213_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're wrong!\nLook closely, it's a white tiger....\nI want to try petting its head.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401213_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "The fact that this is alive and\nkicking is amazing...\nHey...");
        Message_MsgSel("It would be nice if there were more.", "It's like it's related to a monster, right?", "It's just a rare breed of tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401213_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "More!?\nA group of white tigers, huh...\nI get the feeling that they're\ninvincible.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401213_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right! I thought so too...\nHey, it's a good monster, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401213_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Idiot. It's a white tiger.\nYou're such an idiot...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401213_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Whoa!\nThe white tiger looked at me, didn't\nit?");
        Message_MsgSel("As expected, it's intense!", "But I was looking at you!", "A photo! Take a photo!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401213_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah. Because it's a white tiger.\nCool...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401213_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What an idiot...\nLook at the white tiger.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401213_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Ah, sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez!");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401213_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I mean, you see, the white tiger...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you like it that much?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401213_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah...\nSince I was a kid, I've disliked\nseeing living things that looked\nlike monsters.");
                Message_Who(0);
                Message_MsgDisp("主人公", "And now you love them?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401213_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, something like that... Sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Boys will be boys...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401213_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right! A photo!\nTake a photo of me with the white\ntiger!");
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
