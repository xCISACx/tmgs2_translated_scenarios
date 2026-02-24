section "b04_m6_250"{
    int var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_BH161_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_002_D01", 127, 40);
        Voice_PlayVoice("B0406250_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Here is my room!");
        Message_MsgSel("Wow, what an amazing room!", "It has the feeling of a boyish room.", "H-How should I put it? it's a unique room.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406250_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do you really think so? ...\nWhen you say it, I'm glad.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0406250_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nI thought that it was more like a\ngirl's room.\nI'm disappointed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406250_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... What is so strange about it?\nI thought it was a normal room,\nthough...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_BH161_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_002_D01", 127, 40);
        Voice_PlayVoice("B0406250_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, is that so?\nEat the cake I brought as a gift!");
        Message_MsgSel("Oh, please don't fuss over me.", "Keep a piece for your parents.", "Then I'll serve the tea.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0406250_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh, you don't want to eat it?\nWell that means, I bought this for\nnothing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406250_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Oh.\nIs that so, then leave 2 pieces\nalone...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406250_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai's going to make tea?\nIt sounds delicious right now.\nI can't wait for the tea.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes! I made a perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_BH161_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_06_002_D01", 127, 40);
        Voice_PlayVoice("B0406250_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, it's an album of my days in\nkindergarten!");
        Message_MsgSel("You were cute, ｛Amachi＊＊｝.", "Since you said that, I want to see more.", "A photograph with me?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406250_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "...\nGeez, why did you have to say it so\ndirectly?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 8);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406250_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You do not need to look!\nI'm really shy!!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0406250_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It can't be.\nIsn't it an album of the days in\nkindergarten?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406250_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hey, Senpai.\nDo you want to take a photograph\nwhile we walk, next time?\nLots of pictures.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406250_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Then, we would make our own\nalbum....\nHow does that sound?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, sounds good.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406250_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay then! ... I forward to it.\nIt's like a class event.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, is that right?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406250_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I wanted an album.\nI want one badly because Senpai and\nI are in different school years.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406250_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm really glad this is coming true.\nWe will make a wonderful album.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
