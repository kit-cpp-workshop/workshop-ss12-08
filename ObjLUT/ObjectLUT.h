/*
 * ObjectLUT.h
 *
 *  Created on: 20.06.2012
 *      Author: markus
 */

#ifndef OBJECTLUT_H_
#define OBJECTLUT_H_

#include <cstddef>

namespace workshop {

    // Please do NOT modify the predefined part of this class/interface
    // However, for your implementation you will need (most likely) require to
    // extend this predefined template with your private implementation details.

    /**
     * This class can store objects by a user-provided key-value mapping.
     * Each key represents at most one value, key-multivalue-mappings are not
     * supported.
     *
     * While NULL values are permitted by all methods of this class, it is not
     * recommended to use NULL values since they can not be distinguished from
     * the NULL result representing "no match". In those cases, the methods
     * containsKey() and containsValue() might be used.
     */
    template < typename key_t, typename value_t >
    class ObjectLUT {
        public:
            /**
             * Creates an empty ObjectLUT instance.
             *
             * Time complexity: O(1)
             */
            ObjectLUT();
            /**
             * Detroys an ObjectLUT instance and releases all occupied memory.
             * Furthermore, all remaining keys and values in this instance
             * get deleted, too!
             *
             * Time complexity: O(n)
             */
            virtual ~ObjectLUT();

            /**
             * Stores the passed key-value assignment. If another key-value
             * pair with the same key has already been inserted, the old
             * value gets replaced.
             *
             * Time complexity: O(1)
             *
             * @param key the key to which value should be assigned
             * @param value the value to be stored
             * @return NULL if no value has been assigned to the passed key before,
             *         or the previously stored value if it has been replaced
             */
            value_t* insert(const key_t *key, value_t *value);
            /**
             * Searches a key-value mapping matching the passed key.
             *
             * Time complexity: O(n)
             *
             * @param key the key to search for
             * @return the value assigned to key, or NULL if key has not been found
             */
            value_t* find(const key_t *key);
            const value_t* find(const key_t *key) const;

            /**
             * Searches the key-value pair matching the passed key and removes
             * it from this instance.
             *
             * Time complexity: O(n)
             *
             * @param key the key to search for
             * @return the value which has been assigned to key, or NULL if key
             *         has not been found
             */
            value_t* remove(const key_t *key);
            /**
             * Removes all stored key-value mappings.
             *
             * Time complexity: O(n)
             */
            void clear();

            /**
             * Tests if this instance has a value assigned to key.
             *
             * Time complexity: O(n)
             *
             * @param key the key to search for
             * @return true if there is an assigned value, else false
             */
            bool containsKey(const key_t *key) const;
            /**
             * Tests if this instance contains the passed value.
             *
             * Time complexity: O(n)
             *
             * @param value the value to search for
             * @return true if the value is stored in this instance, else false
             */
            bool containsValue(const value_t *value) const;

            /**
             * Tests if this instance contains any key-value mappings.
             *
             * Time complexity: O(1)
             *
             * @return true if this instance is empty, else false
             */
            bool isEmpty() const;
            /**
             * Returns the number of stored key-value mappings.
             *
             * Time complexity: O(1)
             *
             * @return the count of key-value mappings stored by this instance
             */
            size_t size() const;
    };
}

#endif /* OBJECTLUT_H_ */
