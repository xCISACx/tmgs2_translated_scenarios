section "b04_m3_071"{
    int var0 = Date_GetDateOption(2, 18);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403071_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThe area in front of the fountains\nis crowded.\nEveryone is probably there because\nthey want to be cooled down.");
        Message_MsgSel("The water surface is shining like a gem!", "I want to shower under the fountain.", "I hate the heat and days like these...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403071_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Rather than shining, the reflection\nis dazzling.\nIt is so radiant that it hurts my\neyes.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403071_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI won't stop you if you've brought a\ntowel, but that is not how you are\nsupposed to enjoy the fountain.\nJust look at it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403071_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It really appears to be the case....\nAlright, I will buy you a cold\ndrink.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403071_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Apparently, these fountains light up\nat night.\nThe atmosphere would be different,\nright?");
        Message_MsgSel("I want to see it too...", "There would surely be lots of couples.", "There would surely be lots of bugs.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403071_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is dangerous for a girl to walk\nby herself.\nIt would be nice if you had a\nguardian with you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403071_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI did not mean that the atmosphere\nchanges in that kind of way.\nIt was just something people usually\nsay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403071_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah... right! I forgot about that.\nIt is important to discover the\nreality of the situation.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403071_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I feel like I have returned to my\nchildhood when I look at the\nfountain.");
        Message_MsgSel("It's like a castle from a fairy-tale.", "Ah, there's a bug!", "Don't you feel like stopping the water?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403071_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI am not really familiar with fairy\ntales.\nIs there one about a fountain?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403071_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are right.\nIt is not coming toward us, and is\njust basking in the sun.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403071_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... I do not.\nAre you a mischievous child or\nsomething?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403071_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWhen I was a child, I have thought\nabout doing something like that.");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403071_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "When I saw the other children doing\nit, it seemed fun...");
                Message_Who(0);
                Message_MsgDisp("主人公", "You didn't do it when you were a\nchild?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0403071_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No.\nAfter they had tried, they were all\nsoaked and were worrying because\nthey didn't have any spare clothes.");
                Voice_PlayVoice("B0403071_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I learned of the painful experience\nof doing something without thinking\nof the consequences.\nSo I did not do it.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........\nThat sounds like you,\n｛Hikami＊＊｝.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403071_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Really? ...\nBut the faces of children who were\nplaying around were really radiant.");
                Voice_PlayVoice("B0403071_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "There may be enjoyment in this world\nthat you would not know of unless\nyou did things without thinking\nabout it.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403071_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "While it is not too late, perhaps I\nshould try.\nSomething about me might change...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Environment_StopME(1, 40);
    System_Wait(60);
    }
