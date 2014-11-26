//
//  NSFetchedResultsController+Helper.h
//
//  Created by Mylene Bayan on 9/5/14.
//

@interface NSFetchedResultsController (Helper)


/**
 *  Returns number of objects in a given section
 *
 *  @param section the section that contains the objects to be counted
 *
 *  @return count of all objects in a given section
 */
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)section;


/**
 *  Returns an object from a given row and section
 *
 *  @param row     row in fetchedresultscontroller that needs to be retrieved
 *  @param section section in fetchedresultscontroller that containts the row you need
 *
 *  @return object in the given row and section
 */
-(id)objectForRow:(NSUInteger)row inSection:(NSUInteger)section;

@end
