section "b04_m1_147"{
    int var0 = Date_GetDateOption(2, 42);
    Background_Bg_GS2("BG_NE280_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_30_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401147_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, yeah! It was extremely cool!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401147_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really? I liked it quite a lot.\nI want to come again.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401147_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see.\nThen I'll come alone next time...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401147_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "They have many standards, so it was\nquite easy to listen to, right?");
        Message_MsgSel("People don't like jazz anymore.", "This... is music?", "They played lots of songs that I know!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401147_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "R-Really? ...\nAnyway, who are you supposed to be?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401147_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You just don't get it...\nYou don't get it at all.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401147_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me too!\nHey, it makes you want to remember,\nright?\nThe titles and stuff!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401147_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "If you take a look around, the rest\nof the audience are adults, right?");
        Message_MsgSel("We're both already adults▼", "It makes me a little nervous.", "The atmosphere was amazing. It was fun.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 3);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(1, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0401147_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Adults don't speak with that kind of\nlovey dovey tone, right...?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0401147_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Haha! You?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401147_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't make me laugh!\nWhat about you is like an adult?");
                Message_Who(0);
                Message_MsgDisp("主人公", "That's an adult secret▼");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401147_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "A-Ah, I see. I see, an adult...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝...\nIs he imagining something weird?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401147_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "W-Well...\nHey, just make a normal face? Okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401147_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nWe also want to graduate from\ndrinking juice too, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
