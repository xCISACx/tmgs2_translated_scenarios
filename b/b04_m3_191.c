section "b04_m3_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403191_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "What a splendid sight, this burning\nkind of color...");
        Message_MsgSel("The leaves look like a baby's hand.", "The red and yellow trees are beautiful.", "Ah! There's a bagworm!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403191_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nHands of babies that have quite\npointed fingernails.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403191_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, you are right...\nIt seems like I will forget the time\nas I gaze at the leaves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403191_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The bagworms have come to quite a\ngood place.\nThere is an abundance of colors\nhere.");
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
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403191_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "\"As I could not bring an offering, I\nglance upon Mount Tamuke\"...");
        Message_MsgSel("Eh? What's wrong with you all of a sudden?", "\"To the gods, I offer rivers of red leaves.\"", "\"My sleeves are wet, moisture soaking in.\"");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_BlinkStart(3, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403191_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... It's \"100 poems by 100 poets\".\nIn the last part, the red leaves\nshow.\nIt is a poem I remember when I come\nhere.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403191_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thank you for finishing the poem....\nI am reminded of that poem when I\ncome here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403191_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThough that is a part of \"100 poems\nby 100 poets\", I cannot accept a\nreply from the 1st poem.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403191_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Natural life is beautiful...\nI feel like my heart is being\ncleansed.");
        Message_MsgSel("That doesn't happen with artificial things.", "It makes me want to paint it.", "So even you're dirty, ｛Hikami＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403191_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, the beauty of another world...\nNo matter how much biology advances,\nhumans cannot reproduce this.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 3);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403191_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt is not my place to turn it into a\npainting.\nRight, you should paint it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403191_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIt is not necessarily true that I\nwas always dirty before I was\ncleansed.\nYou are surprisingly rude.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403191_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "W... What do you know!?\nHave you read my diary?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? You keep a diary.\n｛Hikami＊＊｝?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403191_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, no...\nRight, there is no way you have read\nit...");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403191_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "If you had read it, I would not be\nable to get back on my feet...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hey, what have you been writing\nabout?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403191_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I cannot tell you, it is top secret!");
                Message_Who(0);
                Message_MsgDisp("主人公", "... I want to read it.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403191_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Never!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh, I want to try reading it...\n｛Hikami＊＊｝'s diary!)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
